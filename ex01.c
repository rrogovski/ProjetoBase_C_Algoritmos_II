#include <stdio.h>

#include "ex01.h"

/** Exerc�cio 01
*/
void ex01()
{
	printf("Exercic�o 1)");
    printf("\nFa�a um programa que carregue um vetor com 15 elementos inteiros e verifique a");
    printf("\nexist�ncia de elementos iguais a 30, mostrando as posi��es em que esses elementos");
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
            printf("\nO valor %d do vetor � igual a 30!", i + 1);
        }
    }
    printf("\n\n");
    system("pause");
	limparTela();

}
