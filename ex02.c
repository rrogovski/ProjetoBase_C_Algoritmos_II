#include <stdio.h>

#include "ex02.h"

/** Exerc�cio 02
*/
void ex02()
{
    int primos[10];
    int numero = 100;


    printf("\nExerc�cio 2)\nFa�a um programa que gere os dez primeiros n�meros primos acima de 100 e armazene-os em um vetor, escrevendo ao final o vetor resultante.");

    printf("\n\nDez primeiros n�meros primos acima de 100: \n\n");

    for (int i = 0; i < 10; i++){
        do
        {
            numero++;
        }while(!VerificaPrimo(numero));

        if (VerificaPrimo(numero)){
                primos[i] = numero;
        }
    }

    for (int i = 0; i < 10; i++){
        fflush(stdin);
        printf("%d, ", primos[i]);
    }

    printf("\n\n");
	system("pause");
	limparTela();
}
