#include "helper.h"

/** Função para repetir strings
*/
void repeatChar(char input, int count)
{
	for (int i = 0; i != count; i++)
	{
		printf("%c", input);
	}
}

/** Função para ler uma entrada de um número e verificar se é par ou ímpar
*/
void parOuImpar() {
    int num;

    voltar:;
    fflush(stdin);
    printf("\nInforme um número:\n");

    if(scanf("%d",&num) != 1) {
        printf("Digite uma opção válida\n");
        goto voltar;
    } else {
        num % 2 == 0 ? printf("\nO valor informado, %d, é par!",num) : printf("\nO valor informado, %d, é ímpar!",num);
    }
}

/** Função para verificar um número e verificar se é par ou ímpar
*/
int verificarParOuImpar() {
    int num;

    voltar:;
    fflush(stdin);
    printf("\nInforme um número:\n");

    if(scanf("%d",&num) != 1) {
        printf("Digite uma opção válida\n");
        goto voltar;
    }

    return num % 2;
}

/** Função para limpar a tela
*/
void limparTela()
{
	system("cls || clear");
}

/** Faz a validação da entrada de uma opção do tipo char
*/
int validarOpcao(char opcao) {

}

/** Função para verificar um número primo
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
