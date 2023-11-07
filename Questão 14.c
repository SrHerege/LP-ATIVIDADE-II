#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
int numero, QntPar = 0, QntImpar = 0;
float SomaPar = 0, SomaImpar = 0;

    printf("Digite um número inteiro positivo (Para finalizar digite um numero negativo): ");
    scanf("%i", &numero);

    while (numero >= 0) {
        if (numero % 2 == 0) {
            QntPar++;
            SomaPar += numero;
        } else {
            QntImpar++;
            SomaImpar += numero;
        }

        printf("Digite um número inteiro positivo (ou um número negativo para sair): ");
        scanf("%i", &numero);
    }

    printf("Quantidade de número pares: %i\n", QntPar);
    printf("Quantidade de número ímpares: %i\n", QntImpar);
    printf("Média aritmética dos número pares: %.2f\n", SomaPar / QntPar);
    printf("Média aritmética dos número ímpares: %.2f\n", SomaImpar / QntImpar);

    return 0;
}
