#include "TAD_Objeto.h"

int FazlistaItemVazia(TypeItens *itens){
    itens->Primeiro = Inicio;
    itens->Ultimo = itens->Primeiro;
}

int FazListaItens(TypeItens *itens, TypeObjeto objeto, int newpeso, int newvalor) {
    int i;
    for (i = 0; i < quantidade; ++i) {
        printf("Digite o peso e valor do objeto\n");
        scanf("%d %d", &newpeso, &newvalor);
        itens->objeto[i].peso = newpeso;
        itens->objeto[i].valor = newvalor;
    }
}

int FazListaItensArquivo(FILE *ptr_arq, TypeItens *itens, TypeObjeto objeto, int newpeso, int newvalor) {
    int i;
    for (i = 0; i < quantidade; ++i) {
        fscanf(ptr_arq,"%d %d", &newpeso, &newvalor);
        itens->objeto[i].peso = newpeso;
        itens->objeto[i].valor = newvalor;
    }
}

int ImprimeListaItens(TypeItens *itens){
    int i;
    for (i = itens->Primeiro; i < quantidade; i++) {
        printf("%d ", itens->objeto[i].peso);
        printf("%d\n", itens->objeto[i].valor);
    }
}