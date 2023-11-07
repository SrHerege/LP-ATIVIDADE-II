#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
int numero, QntPar = 0, QntImpar = 0;
float SomaPar = 0, SomaImpar = 0;

    printf("Digite um n�mero inteiro positivo (Para finalizar digite um numero negativo): ");
    scanf("%i", &numero);

    while (numero >= 0) {
        if (numero % 2 == 0) {
            QntPar++;
            SomaPar += numero;
        } else {
            QntImpar++;
            SomaImpar += numero;
        }

        printf("Digite um n�mero inteiro positivo (ou um n�mero negativo para sair): ");
        scanf("%i", &numero);
    }

    printf("Quantidade de n�mero pares: %i\n", QntPar);
    printf("Quantidade de n�mero �mpares: %i\n", QntImpar);
    printf("M�dia aritm�tica dos n�mero pares: %.2f\n", SomaPar / QntPar);
    printf("M�dia aritm�tica dos n�mero �mpares: %.2f\n", SomaImpar / QntImpar);

    return 0;
}
