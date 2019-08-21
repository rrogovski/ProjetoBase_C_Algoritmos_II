#ifndef HELPER_H
#define HELPER_H

#include <stdio.h>
#include <math.h>
#include <stdbool.h>

/** Função para repetir strings
*/
void repeatChar(char input, int count);

/** Função para ler uma entrada de um número e verificar se é par ou ímpar
*/
void parOuImpar();

/** Função para verificar um número e verificar se é par ou ímpar
*/
int verificarParOuImpar();

/** Função para limpar a tela
*/
void limparTela();

/** Faz a validação da entrada de uma opção do tipo char
*/
int validarOpcao(char opcao);

/** Função para verificar um número primo
*/
bool VerificaPrimo(int p);

/** Sair do programa
*/
void sair();


#endif
