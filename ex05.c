#include <stdio.h>

#include "ex05.h"

/** Struct Poltrona
*/
typedef struct{
    int numeroPoltrona;
    char tipo; //J-Janela, C-Corredor
    int situcao; //0-Livre, 1-Ocupada
} Poltrona;

/** Verificar se poltrona est� livre
*/
char verificaPoltrona(Poltrona poltrona) {
    return poltrona.situcao == 0 ? 'S' : 'N';
}

/** Exerc�cio 05
*/
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

    voltar:;

    printf("\n*Poltrona livre: [S-sim | N-n�o]:\n");
    for(int i = 0; i < 24; i++){
        printf("#%2d | Poltrona -> Tipo:%c | Livre: %c    |    #%2d | Poltrona -> Tipo:%c | Livre: %c \n",poltCorredor[i].numeroPoltrona,poltCorredor[i].tipo,verificaPoltrona(poltCorredor[i]),poltJanela[i].numeroPoltrona,poltJanela[i].tipo,verificaPoltrona(poltJanela[i]));
    }

    printf("\nRealizar venda de passagem? [S-sim | N-n�o]:");
    voltarVenda:;
    fflush(stdin);
    opcao = getchar();
    opcao = toupper((unsigned char) opcao);

    if(opcao!= 'S' && opcao!= 'N') {
        printf("\nOp��o inv�lida! informe outra op��o:");
        goto voltarVenda;
    }

    menu:;

    if(opcao == 'S'){
        printf("\n\nQual o tipo de poltrona? [J-Janela | C-Corredor]:");
        voltarTipoPoltrona:;
        fflush(stdin);
        scanf("%c",&opcao);
        opcao = toupper((unsigned char) opcao);

        if(opcao!= 'J' && opcao!= 'C') {
            printf("\nOp��o inv�lida! Informe outra op��o:");
            goto voltarTipoPoltrona;
        }

        switch (opcao)
		{
        int num;

		case 'J':
			limparTela();
			fflush(stdin);
			printf("Poltronas livres:\n");
			for(int i = 0; i < 24; i++){
                if(poltJanela[i].situcao == 0){
                    printf("    #%2d | Poltrona -> Tipo:%c | Livre: %c\n",poltJanela[i].numeroPoltrona,poltJanela[i].tipo,verificaPoltrona(poltJanela[i]));
                }
			}

			printf("        Qual o n�mero[#] da poltrona:");
			voltarSelecaoPoltronaJanela:;
            fflush(stdin);

            //Verifica se o n�mero digitado n�o � v�lido ou � maior que maior que o tamanho do array ou se n�o � par
            if(scanf("%d",&num) != 1 || (sizeof(poltJanela)/sizeof(poltJanela[0])) < num/2 || num % 2 != 0) {
                printf("\n        Op��o inv�lida! Informe outra poltrona:");
                goto voltarSelecaoPoltronaJanela;
            } else {
                if(poltJanela[(num/2)-1].situcao == 1) {
                    printf("\n        Venda n�o realizada. A poltrona #%d est� reservada. Informe outra poltrona:",num);
                    goto voltarSelecaoPoltronaJanela;
                } else {
                    poltJanela[(num/2)-1].situcao = 1;
                    printf("\n        Venda realizada com sucesso! A poltrona #%d foi reservada.\n",num);
                    printf("\n        Pressionar qualquer tecla para voltar � tela inicial");
                    getch();
                    goto voltar;
                }
            }

			goto voltar;
			break;

		case 'C':
			limparTela();
			fflush(stdin);
			printf("Poltronas livres:\n");
			for(int i = 0; i < 24; i++){
                if(poltCorredor[i].situcao == 0){
                    printf("    #%2d | Poltrona -> Tipo:%c | Livre: %c\n",poltCorredor[i].numeroPoltrona,poltCorredor[i].tipo,verificaPoltrona(poltCorredor[i]));
                }
			}

			printf("        Qual o n�mero[#] da poltrona:");
			voltarSelecaoPoltronaCorredor:;
            fflush(stdin);

            //Verifica se o n�mero digitado n�o � v�lido ou � maior que maior que o tamanho do array ou se n�o � �mpar
            if(scanf("%d",&num) != 1 || (sizeof(poltCorredor)/sizeof(poltCorredor[0])) < num/2 || num % 2 == 0) {
                printf("\n        Op��o inv�lida! Informe outra poltrona:");
                goto voltarSelecaoPoltronaCorredor;
            } else {
                if(poltCorredor[(num - 1)/2].situcao == 1) {
                    printf("\n        Venda n�o realizada. A poltrona #%d est� reservada. Informe outra poltrona:",num);
                    goto voltarSelecaoPoltronaCorredor;
                } else {
                    poltCorredor[(num - 1)/2].situcao = 1;
                    printf("\n        Venda realizada com sucesso! A poltrona #%d foi reservada.\n",num);
                    printf("\n        Pressionar qualquer tecla para voltar � tela inicial");
                    getch();
                    goto voltar;
                }
            }

			goto voltar;
			break;

		default:
			printf("Digite uma op��o v�lida\n");
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

	limparTela();
}
