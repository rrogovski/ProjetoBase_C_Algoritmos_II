#include <stdio.h>

#include "ex03.h"

/** Exercício 03
*/
void ex03()
{
	printf("\nFaça um programa que leia um código numérico inteiro e um vetor de cinco posições");
    printf("\nde números reais. Se o código for zero, termine o programa. Se o código for 1, mostre");
    printf("\no vetor na ordem direta. Se o código for 2, mostre o vetor na ordem inversa.\n\n");

    int vetor[5];

    for (int i = 0; i < 5; i++){

        printf("Digite o valor %d do vetor: ", i + 1);
        fflush(stdin);
        scanf("%d", &vetor[i]);
    }

    char opcao;

    printf("\n\nOpções:");
    printf("\n0 - Termina o exercício!");
    printf("\n1 - Motra o valor da ordem direta!");
    printf("\n2 - Mostra o vetor na ordem inversa!\n");

    fflush(stdin);

    scanf("%c",&opcao);

    while (opcao != '0' && opcao != '1' && opcao != '2'){

        printf("Opção digitada inválida, digite novamente: ");
        fflush(stdin);
        scanf("%c",&opcao);
    }

    switch (opcao){
        case '1':
            printf("\nOpção 1: Vetor na ordem direta!");
            for (int i = 0; i < 5; i++){

                printf("\nO valor do vetor %d é: %d", i + 1, vetor[i]);
            }
            break;

        case '2':
            printf("\nOpção 2: Vetor na ordem inversa!");
            for (int i = 4; i >= 0; i--){

                printf("\nO valor do vetor %d é: %d", i + 1, vetor[i]);
            }
            break;

        default:
            break;
    }
    printf("\n\n");
	system("pause");
	limparTela();

}
