#include <stdio.h>

void ex06()
{
    int num, result;

    printf("\nExercic�o 6)\nLer um n�mero e dizer se � par ou �mpar.\n");
    printf("Como fazer isso 5x?\n");
    printf("Como fazer para repetir at� que o n�mero seja igual a 0?\n");

    //parOuImpar();
    result = verificarParOuImpar();
    result == 0 ? printf("\nO valor informado � par!") : printf("\nO valor informado � �mpar!");

    for ( int i = 0; i < 5; i++)
        parOuImpar();

    getch();
    limparTela();
}
