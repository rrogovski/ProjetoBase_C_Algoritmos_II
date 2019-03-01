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

///Acad�micos: Rodrigo Rogovski

///Fun��o para repetir strings
void repeatChar(char input, int count)
{
	for (int i = 0; i != count; i++)
	{
		printf("%c", input);
	}
}

///fun��o para limpar a tela
void limparTela()
{
	system("cls || clear");
}

///Fun��o para verificar um n�mero primo
bool VerificaPrimo(int p){
    fflush(stdin);
    bool primo;
    if((p % 2 != 0 || p <= 2) && p != 1)
        primo = true;
    else
        primo = false;

    float raiz = sqrt(p);

    for (int i = 3; i <= raiz; i++){
        if (p % i == 0){
            primo = false;
            i = (int) (i + raiz);
        }
    }

    return primo;
}

///Struct Poltrona
typedef struct{
    int numeroPoltrona;
    char tipo; //J-Janela, C-Corredor
    int situcao; //0-Livre, 1-Ocupada
} Poltrona;

///Exerc�cio 01
void ex01()
{
	printf("Exercic�o 1)");
    printf("\nFa�a um programa que carregue um vetor com 15 elementos inteiros e verifique a");
    printf("\nexist�ncia de elementos iguais a 30, mostrando as posi��es em que esses elementos");
    printf("\napareceram.\n\n");

    int valores[15];


    for (int i = 0; i < 15; i++){

        printf("Digite o valor do vetor %d: ", i + 1);
        fflush(stdin);
        scanf("%d",&valores[i]);
    }

    printf("\n\n");

    for (int i = 0; i < 15; i++){

        if (valores[i] == 30){
            printf("\nO valor %d do vetor � igual a 30!", i + 1);
        }
    }
    printf("\n\n");
    system("pause");
	limparTela();

}

///Exerc�cio 02
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

///Exerc�cio 03
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

///Exerc�cio 04
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

///Exerc�cio 05
void ex05()
{
    Poltrona poltJanela[24];
    Poltrona poltCorredor[24];
    char opcao;

    printf("\nExercic�o 5)\nUma empresa possui �nibus com 48 lugares (24 nas janelas e 24 no corredor). Fa�a um programa que utilize dois vetores para controlar as poltronas ocupadas no corredor e na janela. Considere que zero representa poltrona desocupada e um representa poltrona ocupada. Esse programa deve controlar a venda de passagens da seguinte maneira:\n");
    printf("\n   -> O cliente informa se deseja poltrona no corredor ou na janela e, depois, o programa deve informar quais poltronas est�o dispon�veis para venda;\n");
    printf("\n   -> Quando n�o existirem poltronas livres no corredor, nas janelas ou, ainda, quando o �nibus estiver completamente cheio, deve ser mostrada uma mensagem.\n\n");

    for(int i = 0; i < 24; i++){
        poltJanela[i].numeroPoltrona = (i+1)*2;
        poltJanela[i].tipo = 'J';
        poltJanela[i].situcao = 0;
        poltCorredor[i].numeroPoltrona = (i+1)*2-1;
        poltCorredor[i].tipo = 'C';
        poltCorredor[i].situcao = 0;
    }

    for(int i = 0; i < 24; i++){
        printf("Poltrona -> Tipo:%c | Livre: %d | #%2d    |    Poltrona -> Tipo:%c | Livre: %d | #%2d\n",poltCorredor[i].tipo,poltCorredor[i].situcao,poltCorredor[i].numeroPoltrona,poltJanela[i].tipo,poltJanela[i].situcao,poltJanela[i].numeroPoltrona);
    }

    voltar:;

    fflush(stdin);
    printf("\n\nRealizar venda de passagem? [S-sim | N-n�o]:");
    opcao = getchar();
    opcao = toupper((unsigned char) opcao);

    menu:;

    if(opcao == 'S'){
        printf("\n\nQual o tipo de poltrona? [J-Janela | C-Corredor]:");
        fflush(stdin);
        scanf("%c",&opcao);
        opcao = toupper((unsigned char) opcao);

        switch (opcao)
		{
        int num;
        int invalida = 0;
		case 'J':
			limparTela();
			fflush(stdin);
			printf("Poltronas livres:\n");
			for(int i = 0; i < 24; i++){
                if(poltJanela[i].situcao == 0){
                    printf("    Poltrona -> Tipo:%c | Livre: %d | #%2d\n",poltJanela[i].tipo,poltJanela[i].situcao,poltJanela[i].numeroPoltrona);
                }
			}

			printf("        Qual o n�mero[#] da poltrona:");
            fflush(stdin);
            scanf("%d",&num);

            for(int i = 0; i < 24; i++){
                if(poltJanela[i].numeroPoltrona == num && poltJanela[i].situcao == 1){
                    printf("\n      Venda n�o realizada. A poltrona #%d est� reservada. Tente novamente!\n",num);
                    goto voltar;
                }
			}

			for(int i = 0; i < 24; i++){
                if(poltJanela[i].numeroPoltrona == num){
                    if (poltJanela[i].situcao == 0){
                        poltJanela[i].situcao = 1;
                        printf("\n      Venda realizada com sucesso! A poltrona #%d foi reservada.\n",num);
                        goto voltar;
                    }
                }
                else{
                        invalida = 1;
                }
			}

			if(invalida == 1){
                printf("\n      Venda n�o realizada. A poltrona #%d n�o foi localizada. Tente novamente\n",num);
                goto voltar;
			}
			goto voltar;
			break;

		case 'C':
			limparTela();
			fflush(stdin);
			printf("Poltronas livres:\n");
			for(int i = 0; i < 24; i++){
                if(poltCorredor[i].situcao == 0){
                    printf("    Poltrona -> Tipo:%c | Livre: %d | #%2d\n",poltCorredor[i].tipo,poltCorredor[i].situcao,poltCorredor[i].numeroPoltrona);
                }
			}

			printf("        Qual o n�mero[#] da poltrona:");
            fflush(stdin);
            scanf("%d",&num);

			for(int i = 0; i < 24; i++){
                if(poltCorredor[i].numeroPoltrona == num && poltCorredor[i].situcao == 1){
                    printf("\n      Venda n�o realizada. A poltrona #%d est� reservada. Tente novamente!\n",num);
                    goto voltar;
                }
			}

			for(int i = 0; i < 24; i++){
                if(poltCorredor[i].numeroPoltrona == num){
                    if (poltCorredor[i].situcao == 0){
                        poltCorredor[i].situcao = 1;
                        printf("\n      Venda realizada com sucesso! A poltrona #%d foi reservada.\n",num);
                        goto voltar;
                    }
                }
                else{
                        invalida = 1;
                }
			}

			if(invalida == 1){
                printf("\n      Venda n�o realizada. A poltrona #%d n�o foi localizada. Tente novamente\n",num);
                goto voltar;
			}
			goto voltar;
			break;

		default:
			printf("Digite uma op��o v�lida\n");
			//break;
			goto menu;
		}
    }

    submenu:;

    if(opcao == 'N'){
        printf("\n\nDeseja sair do sistema de vendas? [S-Sim | N-N�o]:");
        fflush(stdin);
        scanf("%c",&opcao);
        opcao = toupper((unsigned char) opcao);

        switch (opcao)
		{
		case 'S':
			goto fim;
			break;

		case 'N':
			goto voltar;
			break;

		default:
			printf("Digite uma op��o v�lida\n");
			//break;
			goto submenu;
		}

    }


    fim:;
    printf("\n\n");
	system("pause");
	limparTela();
}

//Sair do programa
void sair()
{
	limparTela();
	printf("Hasta la vista, Baby!!!\n\nFechando o programa em...\n\n");

	for (int i = 5; i > 0; i--)
	{
		printf("%d\n", i);
		Sleep(1000);
	}
}

//Inicializa��o do programa
int main()
{
	int opcao, status, parar, repeticaoPadrao = 100;
	char titulo[70] = "Lista de exerc�cios - Rodrigo";
	setlocale(LC_ALL, "");
	system("mode con cols=100 lines=40");


	CONSOLE_SCREEN_BUFFER_INFO csbi;
	int columns, rows;
	GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &csbi);
	columns = csbi.srWindow.Right - csbi.srWindow.Left + 1;
	rows = csbi.srWindow.Bottom - csbi.srWindow.Top + 1;

	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	WORD saved_attributes;
	saved_attributes = csbi.wAttributes;

//    SCROLLINFO ScrollInfo;
//    ScrollInfo.cbSize = sizeof(ScrollInfo);     // size of this structure
//    ScrollInfo.fMask = SIF_ALL;                 // parameters to set
//    ScrollInfo.nMin = 0;                        // minimum scrolling position
//    ScrollInfo.nMax = 100;                      // maximum scrolling position
//    ScrollInfo.nPage = 40;                      // the page size of the scroll box
//    ScrollInfo.nPos = 50;                       // initial position of the scroll box
//    ScrollInfo.nTrackPos = 0;                   // immediate position of a scroll box that the user is dragging
//    m_MyScrollBar.SetScrollInfo(&ScrollInfo);

	do
	{
		//SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_INTENSITY | BACKGROUND_BLUE);
		SetConsoleTextAttribute(hConsole, 8 | 3| 2 | 20);
		repeatChar('*', repeticaoPadrao);
		printf("\n");
		repeatChar('*', (repeticaoPadrao - strlen(titulo)) / 2); printf(titulo); repeatChar('*', (repeticaoPadrao - strlen(titulo)) / 2);
		printf("\n");
		repeatChar('*', repeticaoPadrao);
		printf("\n\n");
		SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
		printf("Digite o n�mero do exerc�cio para acessar o programa referente ao mesmo:\n\n");
		SetConsoleTextAttribute(hConsole, saved_attributes);
		printf(" 1 - Acessar o exerc�cio 01\n\n");
		printf(" 2 - Acessar o exerc�cio 02\n\n");
		printf(" 3 - Acessar o exerc�cio 03\n\n");
		printf(" 4 - Acessar o exerc�cio 04\n\n");
		printf(" 5 - Acessar o exerc�cio 05\n\n");
		printf(" 0 -  Sair\n\n");
		voltar:;

		//status = scanf("%d", &opcao);

        if (scanf("%d", &opcao) != 1) {
            fflush(stdin);
            printf("Digite uma op��o v�lida\n");
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

            case 0:
                limparTela();
                fflush(stdin);
                sair();
                break;

            default:
                printf("Digite uma op��o v�lida\n");
                fflush(stdin);
                //break;
                goto voltar;
            }
        }
	} while (opcao);

	return 0;
}
