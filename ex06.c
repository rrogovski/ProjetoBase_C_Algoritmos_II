#include <stdio.h>

void ex06()
{
    int num, result;

    printf("\nExercicío 6)\nLer um número e dizer se é par ou ímpar.\n");
    printf("Como fazer isso 5x?\n");
    printf("Como fazer para repetir até que o número seja igual a 0?\n");

    //parOuImpar();
    result = verificarParOuImpar();
    result == 0 ? printf("\nO valor informado é par!") : printf("\nO valor informado é ímpar!");

    for ( int i = 0; i < 5; i++)
        parOuImpar();

    getch();
    limparTela();
}
