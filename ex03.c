#include <stdio.h>

#include "ex03.h"

/** Exerc�cio 03
*/
void ex03()
{
	printf("\nFa�a um programa que leia um c�digo num�rico inteiro e um vetor de cinco posi��es");
    printf("\nde n�meros reais. Se o c�digo for zero, termine o programa. Se o c�digo for 1, mostre");
    printf("\no vetor na ordem direta. Se o c�digo for 2, mostre o vetor na ordem inversa.\n\n");

    int vetor[5];

    for (int i = 0; i < 5; i++){

        printf("Digite o valor %d do vetor: ", i + 1);
        fflush(stdin);
        scanf("%d", &vetor[i]);
    }

    char opcao;

    printf("\n\nOp��es:");
    printf("\n0 - Termina o exerc�cio!");
    printf("\n1 - Motra o valor da ordem direta!");
    printf("\n2 - Mostra o vetor na ordem inversa!\n");

    fflush(stdin);

    scanf("%c",&opcao);

    while (opcao != '0' && opcao != '1' && opcao != '2'){

        printf("Op��o digitada inv�lida, digite novamente: ");
        fflush(stdin);
        scanf("%c",&opcao);
    }

    switch (opcao){
        case '1':
            printf("\nOp��o 1: Vetor na ordem direta!");
            for (int i = 0; i < 5; i++){

                printf("\nO valor do vetor %d �: %d", i + 1, vetor[i]);
            }
            break;

        case '2':
            printf("\nOp��o 2: Vetor na ordem inversa!");
            for (int i = 4; i >= 0; i--){

                printf("\nO valor do vetor %d �: %d", i + 1, vetor[i]);
            }
            break;

        default:
            break;
    }
    printf("\n\n");
	system("pause");
	limparTela();

}
