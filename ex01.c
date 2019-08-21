#include <stdio.h>

#include "ex01.h"

/** Exercício 01
*/
void ex01()
{
	printf("Exercicío 1)");
    printf("\nFaça um programa que carregue um vetor com 15 elementos inteiros e verifique a");
    printf("\nexistência de elementos iguais a 30, mostrando as posições em que esses elementos");
    printf("\napareceram.\n\n");

    int valores[15];


    for (int i = 0; i < 15; i++){

        printf("Digite o valor do vetor %d: ", i + 1);
        fflush(stdin);
        scanf("%d",&valores[i]);
    }

    printf("\n\n");

    for (int i = 0; i < 15; i++){

        if (valores[i] == 30){
            printf("\nO valor %d do vetor é igual a 30!", i + 1);
        }
    }
    printf("\n\n");
    system("pause");
	limparTela();

}
