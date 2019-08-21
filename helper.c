#include "helper.h"

/** Fun��o para repetir strings
*/
void repeatChar(char input, int count)
{
	for (int i = 0; i != count; i++)
	{
		printf("%c", input);
	}
}

/** Fun��o para ler uma entrada de um n�mero e verificar se � par ou �mpar
*/
void parOuImpar() {
    int num;

    voltar:;
    fflush(stdin);
    printf("\nInforme um n�mero:\n");

    if(scanf("%d",&num) != 1) {
        printf("Digite uma op��o v�lida\n");
        goto voltar;
    } else {
        num % 2 == 0 ? printf("\nO valor informado, %d, � par!",num) : printf("\nO valor informado, %d, � �mpar!",num);
    }
}

/** Fun��o para verificar um n�mero e verificar se � par ou �mpar
*/
int verificarParOuImpar() {
    int num;

    voltar:;
    fflush(stdin);
    printf("\nInforme um n�mero:\n");

    if(scanf("%d",&num) != 1) {
        printf("Digite uma op��o v�lida\n");
        goto voltar;
    }

    return num % 2;
}

/** Fun��o para limpar a tela
*/
void limparTela()
{
	system("cls || clear");
}

/** Faz a valida��o da entrada de uma op��o do tipo char
*/
int validarOpcao(char opcao) {

}

/** Fun��o para verificar um n�mero primo
*/
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

/** Sair do programa
*/
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
