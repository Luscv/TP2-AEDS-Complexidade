#include "TAD_objeto.h"
#include <stdio.h>
int FazlistaItemVazia(TypeItens *itens){
    int i;
    itens->Primeiro = Inicio;
    itens->Ultimo = itens->Primeiro;
    for (i = 0; i < 40; ++i) {
        itens->objeto[i].peso = 0;
        itens->objeto[i].valor = 0;
    }
}

int FazListaItens(TypeItens *itens, TypeObjeto *objeto, int newpeso, int newvalor, int n) {
    int i;
    for (i = 0; i < n; ++i) {
        printf("Digite o peso e valor do objeto\n");
        scanf("%d %d", &newpeso, &newvalor);
        itens->objeto[i].peso = newpeso;
        itens->objeto[i].valor = newvalor;
    }
}

int FazListaItensArquivo(FILE *ptr_arq, TypeItens *itens, TypeObjeto *objeto, int newpeso, int newvalor, int n) {
    int i;
    for (i = 0; i < n; ++i) {
        fscanf(ptr_arq,"%d %d", &newpeso, &newvalor);
        itens->objeto[i].peso = newpeso;
        itens->objeto[i].valor = newvalor;
    }
}

int ImprimeListaItens(TypeItens *itens, int n){
    int i;
    for (i = itens->Primeiro; i < n; i++) {
        printf("%d ", itens->objeto[i].peso);
        printf("%d\n", itens->objeto[i].valor);
    }
}