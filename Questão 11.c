#include <stdio.h>
#include <locale.h>

int main() {
 setlocale(LC_ALL, "Portuguese");
int CodigoInserido, CodigoCorreto = 12345;

    printf("Digite o código de acesso: ");
    scanf("%d", &CodigoInserido);

    while (CodigoInserido != CodigoCorreto) {
        printf("Código de acesso incorreto! Tente novamente.\n");
        printf("Digite o código de acesso: ");
        scanf("%d", &CodigoInserido);
    }

    printf("Acesso permitido! Entrada liberada.\n");

    return 0;
}