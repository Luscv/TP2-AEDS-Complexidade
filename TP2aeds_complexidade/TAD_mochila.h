#ifndef TP2AEDS_COMPLEXIDADE_TAD_MOCHILA_H
#define TP2AEDS_COMPLEXIDADE_TAD_MOCHILA_H

#include <stdio.h>
#include "TAD_objeto.h"
#define MaxTam 40

typedef int Apontadorm;

typedef struct{
    TypeObjeto objeto[MaxTam];
    int pesototal, valortotal;
    int capacidade;
    Apontadorm primeiro, ultimo;
}TypeMochila;

void FunCombinacao(TypeItens *itens, int n, int r, int index, TypeObjeto data[], int i, TypeMochila *mochila, int pesototal, int valortotal);
void Combinacao(TypeItens *itens, int r, int n, TypeMochila *mochila, int pesototal, int valortotal);
int InsereMochila(TypeMochila *mochila, int r);
int MochilaVazia(TypeMochila *mochila);

#endif //TP2AEDS_COMPLEXIDADE_TAD_MOCHILA_H
