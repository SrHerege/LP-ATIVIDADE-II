#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

int N1, N2;
char operacao;

printf("Digite o primeiro N�mero: ");
scanf("%d", &N1);

printf("Digite o segundo N�mero: ");
scanf("%d", &N2);

printf("Digite a opera��o, ESCOLHA ENTRE +/-: ");
scanf(" %c", &operacao);

    switch(operacao) {
        case '+':
            printf("Resultado: %d\n", N1 + N2);
            break;
        case '-':
            printf("Resultado: %d\n", N1 - N2);
            break;
        default:
            printf("Opera��o Invalida.\n");
            break;
    }

    return 0;
}
