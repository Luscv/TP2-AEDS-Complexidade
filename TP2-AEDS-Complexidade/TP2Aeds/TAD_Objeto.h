#ifndef TP2AEDS_TAD_OBJETO_H
#define TP2AEDS_TAD_OBJETO_H
#define Inicio 0

typedef int Apontador;
int quantidade;

typedef struct{
    int peso, valor;
}TypeObjeto;

typedef struct{
    Apontador Primeiro, Ultimo;
    TypeObjeto objeto[];
}TypeItens;


int FazlistaItemVazia(TypeItens *itens);
int FazListaItens(TypeItens *itens, TypeObjeto objeto, int newpeso, int newvalor);
int FazListaItensArquivo(FILE *ptr_arq, TypeItens *itens, TypeObjeto objeto, int newpeso, int newvalor);
int ImprimeListaItens(TypeItens *itens);

#endif //TP2AEDS_TAD_OBJETO_H
