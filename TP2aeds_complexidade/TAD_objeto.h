#ifndef TP2AEDS_COMPLEXIDADE_TAD_OBJETO_H
#define TP2AEDS_COMPLEXIDADE_TAD_OBJETO_H

#include <stdio.h>
#define Inicio 0

typedef int Apontador;

typedef struct{
    int peso, valor;
}TypeObjeto;

typedef struct{
    Apontador Primeiro, Ultimo;
    TypeObjeto objeto[];
}TypeItens;


int FazlistaItemVazia(TypeItens *itens);
int FazListaItens(TypeItens *itens, TypeObjeto *objeto, int newpeso, int newvalor, int n);
int FazListaItensArquivo(FILE *ptr_arq, TypeItens *itens, TypeObjeto *objeto, int newpeso, int newvalor, int n);
int ImprimeListaItens(TypeItens *itens, int n);
#endif //TP2AEDS_COMPLEXIDADE_TAD_OBJETO_H
