#include <stdio.h>
#include <locale.h>

int main() {
     setlocale(LC_ALL, "Portuguese");
int N1, N2;

    printf("Digite o primeiro Número: ");
    scanf("%i", &N1);

    printf("Digite o segundo número: ");
    scanf("%i", &N2);

    if (N1 > N2) {
        printf("O maior número é %i e o menor número é %i.\n", N1, N2);
    } else if (N1 < N2) {
        printf("O maior número é %i e o menor número é %i.\n", N1, N2);
    } else {
        printf("Os números são iguais.\n");
    }

    return 0;
}
