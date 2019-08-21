#include <Windows.h>
#include <locale.h>

#include "window.h"

void window() {

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
}
