#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <math.h>
#include <Windows.h>
#include <tchar.h>
#include <conio.h>
#include <time.h>
#include <wchar.h>
#include <ctype.h>
#include <float.h>
#include <memory.h>
#include <stdbool.h>

//#include "helper.h"
//#include "ex01.h"
//#include "ex02.h"

/** Acadêmico: Rodrigo Rogovski
*/


/** Inicialização do programa
*/
int main()
{
	int opcao = 0, repeticaoPadrao = 100;
	char titulo[70] = "Lista de exercícios - Rodrigo";
	//http://linguagemc.com.br/localizacao-de-programas-com-locale-h/
	setlocale(LC_ALL, "");
	system("mode con cols=100 lines=40");

	#if defined(_WIN32) || defined(_WIN64)
        CONSOLE_SCREEN_BUFFER_INFO csbi;
        int columns, rows;
        GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &csbi);
        columns = csbi.srWindow.Right - csbi.srWindow.Left + 1;
        rows = csbi.srWindow.Bottom - csbi.srWindow.Top + 1;

        HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
        WORD saved_attributes;
        saved_attributes = csbi.wAttributes;
    #endif

	do
	{
	    #if defined(_WIN32) || defined(_WIN64)
            SetConsoleTextAttribute(hConsole, 8 | 3| 2 | 20);
		#endif
		repeatChar('*', repeticaoPadrao);
		printf("\n");
		repeatChar('*', (repeticaoPadrao - strlen(titulo)) / 2); printf(titulo); repeatChar('*', (repeticaoPadrao - strlen(titulo)) / 2);
		printf("\n");
		repeatChar('*', repeticaoPadrao);
		printf("\n\n");
		#if defined(_WIN32) || defined(_WIN64)
            SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
		#endif
		printf("Digite o número do exercício para acessar o programa referente ao mesmo:\n\n");
		#if defined(_WIN32) || defined(_WIN64)
            SetConsoleTextAttribute(hConsole, saved_attributes);
		#endif
		printf(" 1 - Acessar o exercício 01\n\n");
		printf(" 2 - Acessar o exercício 02\n\n");
		printf(" 3 - Acessar o exercício 03\n\n");
		printf(" 4 - Acessar o exercício 04\n\n");
		printf(" 5 - Acessar o exercício 05\n\n");
		printf(" 6 - Acessar o exercício 06\n\n");
		printf(" 0 -  Sair\n\n");
		voltar:;

        if (scanf("%d", &opcao) != 1) {
            fflush(stdin);
            printf("Digite uma opção válida\n");
            goto voltar;
        } else {
            switch (opcao)
            {
            case 1:
                limparTela();
                fflush(stdin);
                ex01();
                break;

            case 2:
                limparTela();
                fflush(stdin);
                ex02();
                break;

            case 3:
                limparTela();
                fflush(stdin);
                ex03();
                break;

            case 4:
                limparTela();
                fflush(stdin);
                ex04();
                break;

            case 5:
                limparTela();
                fflush(stdin);
                ex05();
                break;

            case 6:
                limparTela();
                fflush(stdin);
                ex06();
                break;

            case 0:
                limparTela();
                fflush(stdin);
                sair();
                break;

            case 999:
                limparTela();
                fflush(stdin);
                teste();
                break;

            default:
                printf("Digite uma opção válida\n");
                fflush(stdin);
                goto voltar;
            }
        }
	} while (opcao);

	return 0;
}
