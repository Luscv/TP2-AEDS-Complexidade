#include "TAD_Objeto.h"

int FazlistaItemVazia(TypeItens *itens){
    itens->Primeiro = Inicio;
    itens->Ultimo = itens->Primeiro;
}

int FazListaItens(TypeItens *itens, TypeObjeto objeto, int newpeso, int newvalor, int i){
        itens->objeto[i].peso = newpeso;
        itens->objeto[i].valor = newvalor;
}

int ImprimeListaItens(TypeItens *itens){
    int i;
    for (i = itens->Primeiro; i < quantidade; i++) {
        printf("%d\n", itens->objeto[i].peso);
        printf("%d\n", itens->objeto[i].valor);
    }
}