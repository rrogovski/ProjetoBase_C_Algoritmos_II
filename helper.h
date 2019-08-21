#ifndef HELPER_H
#define HELPER_H

#include <stdio.h>
#include <math.h>
#include <stdbool.h>

/** Fun��o para repetir strings
*/
void repeatChar(char input, int count);

/** Fun��o para ler uma entrada de um n�mero e verificar se � par ou �mpar
*/
void parOuImpar();

/** Fun��o para verificar um n�mero e verificar se � par ou �mpar
*/
int verificarParOuImpar();

/** Fun��o para limpar a tela
*/
void limparTela();

/** Faz a valida��o da entrada de uma op��o do tipo char
*/
int validarOpcao(char opcao);

/** Fun��o para verificar um n�mero primo
*/
bool VerificaPrimo(int p);

/** Sair do programa
*/
void sair();


#endif
