#include <stdio.h>
#include <locale.h>

int main() {
     setlocale(LC_ALL, "Portuguese");
int N1, N2;

    printf("Digite o primeiro N�mero: ");
    scanf("%i", &N1);

    printf("Digite o segundo n�mero: ");
    scanf("%i", &N2);

    if (N1 > N2) {
        printf("O maior n�mero � %i e o menor n�mero � %i.\n", N1, N2);
    } else if (N1 < N2) {
        printf("O maior n�mero � %i e o menor n�mero � %i.\n", N1, N2);
    } else {
        printf("Os n�meros s�o iguais.\n");
    }

    return 0;
}
