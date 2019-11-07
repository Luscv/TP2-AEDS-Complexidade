#include "TAD_mochila.h"
#include <stdio.h>

int MochilaVazia(TypeMochila *mochila){
    mochila->primeiro = Inicio;
    mochila->ultimo = mochila->primeiro;
    int i;
    for (i = 0; i < 40; ++i) {
        mochila->objeto[i].peso = 0;
        mochila->objeto[i].valor = 0;
    }
    mochila->valortotal = 0;
    mochila->pesototal = 0;
}

void Combinacao(TypeItens *itens, int r, int n, TypeMochila *mochila, int pesototal, int valortotal){
    // Vetor temporario para armazenar a combinacao atual
    int index = 0;
    int i =0;
    TypeObjeto data[r];

    FunCombinacao(itens, n, r, index, data, i, mochila, pesototal, valortotal);

}
void FunCombinacao(TypeItens *itens, int n, int r, int index, TypeObjeto data[], int i, TypeMochila *mochila, int pesototal, int valortotal){
    // Combinação atual armazenada na mochila caso seja a primeira combinaçao
    int j;
    int tag, cont;
    if (index == r){
        pesototal = 0;
        valortotal = 0;
        for ( j = 0; j < r; j++) {
            pesototal += data[j].peso;
            valortotal += data[j].valor;
        }
        tag = 0;
        cont = 0;
        for ( j = 0; j < r; j++) {
            cont++;
            printf("| %d ", data[j].peso);
            printf("%d |", data[j].valor);
            //avaliação de casos para substituir a combinação atual por outra de mais valor
            if(mochila->objeto[j].peso == 0 && mochila->objeto[j].valor == 0 && mochila->pesototal == 0 && mochila->valortotal == 0){
                mochila->objeto[j].peso = data[j].peso;
                mochila->objeto[j].valor = data[j].valor;
            }else if (valortotal > mochila->valortotal && pesototal <= 40){
                mochila->objeto[j].peso = data[j].peso;
                mochila->objeto[j].valor = data[j].valor;
            }else if(valortotal == mochila->valortotal && (pesototal < mochila->pesototal || mochila->capacidade > r)){
                mochila->objeto[j].peso = data[j].peso;
                mochila->objeto[j].valor = data[j].valor;
            }
            else{
                tag = 1;
            }
            if(tag == 0 && j == r-1){
                mochila->pesototal = pesototal;
                mochila->valortotal = valortotal;
                mochila->capacidade = cont;
            }
        }
        printf("{%d|", pesototal);
        printf("%d}", valortotal);
        printf("\n");
        //evita combinações repetidas pulando para o próximo indice
        while (itens->objeto[i].peso == itens->objeto[i+1].peso && itens->objeto[i].valor == itens->objeto[i+1].valor)
            i++;
        return;
    }

    // retorna quando já não há mais elementos para serem combinados
    if (i >= n) {
        return;
    }
    // Atual esta incluida, coloque a próxima no proximo local
    data[index].peso = itens->objeto[i].peso;
    data[index].valor = itens->objeto[i].valor;
    FunCombinacao(itens, n, r, index+1, data, i+1, mochila, pesototal, valortotal);

    //Atual está excluida, sobreescreva com a próxima combinação
    FunCombinacao(itens, n, r, index, data, i+1, mochila, pesototal, valortotal);


}

int InsereMochila(TypeMochila *mochila, int r){
    int i;
    printf("%d\n", mochila->capacidade );
    printf("Melhor combinacao:\n");
    for (i = 0; i < mochila->capacidade; ++i) {
        printf("peso- %d valor- %d", mochila->objeto[i].peso, mochila->objeto[i].valor);
        printf("\n");
    }


    printf("Peso Total: %d\n", mochila->pesototal);
    printf("Valor Total: %d\n", mochila->valortotal);

}