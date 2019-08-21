#include <stdio.h>

#include "ex04.h"

/** Exerc�cio 04
*/
void ex04()
{
    char caracteres[20] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T'};
    char caracteresInvert[20];
    int posicaoDesc = 19;
    char opcao;

    printf("\nExercic�o 4)\nFa�a um programa que carregue dois vetores de 20 posi��es de caracteres. A seguir, troque o 1� elemento de A com o 20� de B, o 2� de A com o 19� de B, assim por diante, at� trocar o 20� de A com o 1� de B. Mostre os vetores antes e depois da troca.\n");

    printf("\nO Vetor de caracteres est� definido por padr�o com os seguintes valores:\n");

    for (int i = 0; i < 20; i++){
        printf("%c, ", caracteres[i]);
    }

    printf("\n\nDeseja informar um vetor com valores diferentes? [S-sim | N-n�o]\n:");
    opcao = getchar();

    if(opcao == 'S' || opcao == 's'){
        for (int i = 0; i < 20; i++){
            fflush(stdin);
            printf("\nInforme um valor para a posi��o %d do vetor: ", i);
            scanf("%c",&caracteres[i]);
        }

        printf("\nNovo vetor definido com os valores:\n");

        for (int i = 0; i < 20; i++){
            printf("%c, ", caracteres[i]);
        }
    }

    for (int i = 0; i < 20; i++){
        printf("\nTrocando o valor %c da posi��o %d para o valor %c da posi��o %d:\n%c <-> %c\n",caracteres[i],i,caracteres[posicaoDesc],posicaoDesc,caracteres[i],caracteres[posicaoDesc]);
        caracteresInvert[i] = caracteres[posicaoDesc];
        posicaoDesc--;
        printf("\nPr�xima troca! ");
        system("pause");
    }

    printf("\nResultado das trocas:\n");
    for(int i = 0; i < 20; i++){
        printf("%c, ", caracteres[i]);
    }

    printf("\n");

    for(int i = 0; i < 20; i++){
        printf("%c, ", caracteresInvert[i]);
    }

    printf("\n\n");
	system("pause");
	limparTela();
}
