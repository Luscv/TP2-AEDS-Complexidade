#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "TAD_Mochila.c"
#include "TAD_Objeto.h"

int main() {

    TypeItens itens;
    TypeMochila mochila;
    TypeObjeto objeto[quantidade];
    int newpeso, newvalor;
    int opcheck, entrada;
    int capacidade = MaxTam;
    char nome_arq[25];
    int C, N, V, P ;
    C = 40;
    //Entrada por Arquivo
    FILE *ptr_arq;
    FazlistaItemVazia(&itens);
    MochilaVazia(&mochila);
    do {
        printf("Digite o metodo de entrada:\n");
        printf("1 - Arquivo\n");
        printf("2 - Interativo\n");
        fflush(stdin);
        scanf("%d", &entrada);
        if (entrada == 1) {
            printf("Insira o nome do arquivo:\n");
            scanf("%s", nome_arq);

            ptr_arq = fopen(nome_arq, "r");
            if (ptr_arq == NULL) {
                printf("Erro na abertura!\n");
                perror((ptr_arq));
                exit(1);
            }
            fscanf(ptr_arq, "%d", &quantidade);
            FazListaItensArquivo(ptr_arq, &itens, objeto[quantidade], newvalor, newpeso);

        } else if (entrada == 2) {
            printf("Digite a quantidade de itens:\n");
            scanf("%d", &quantidade);
            do {
                printf("*****************************************\n");
                printf("|               Menu                    |\n");
                printf("|                                       |\n");
                printf("| Opcoes                                |\n");
                printf("| 1 - Cadastrar Objeto                  |\n");
                printf("| 2 - Inserir Objeto na mochila         |\n");
                printf("| 3 - Imprimir lista de objetos         |\n");
                printf("| 4 - Imprimir objetos na mochila       |\n");
                printf("| 0 - Encerrar Programa                 |\n");
                printf("*****************************************\n");
                fflush(stdin);
                scanf("%d", &opcheck);
                if (opcheck == 1) {
                    FazListaItens(&itens, objeto[quantidade], newpeso, newvalor);

                }else if (opcheck == 2) {
                    printCombination(objeto, quantidade, capacidade);
                    return 0;
                } else if (opcheck == 3) {
                    ImprimeListaItens(&itens);
                }
            } while (opcheck != 0);
        }
    } while (entrada != 1 || entrada != 2);
    return 0;
}