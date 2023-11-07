#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

int N1, N2;
char operacao;

printf("Digite o primeiro Número: ");
scanf("%d", &N1);

printf("Digite o segundo Número: ");
scanf("%d", &N2);

printf("Digite a operação, ESCOLHA ENTRE +/-: ");
scanf(" %c", &operacao);

    switch(operacao) {
        case '+':
            printf("Resultado: %d\n", N1 + N2);
            break;
        case '-':
            printf("Resultado: %d\n", N1 - N2);
            break;
        default:
            printf("Operação Invalida.\n");
            break;
    }

    return 0;
}
