#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    float ValorCompra;
    int DiaSemana;

    printf("Digite o valor da compra: ");
    scanf("%f", &ValorCompra);

    printf("PARA COMPRAS DE SEGUNDA ATE SEXTA DIGITE 1\n");
    printf("PARA COMPRAS DE SABADO ATE DOMINGO DIGITE 2\n");

    printf("Digite numero pro dia da semana: \n");
    scanf("%d", &DiaSemana);

    if (ValorCompra > 100) {
        if (DiaSemana == 1) {
            ValorCompra = ValorCompra * 0.9;
            printf("O valor da compra com desconto é R$ %.2f\n", ValorCompra);
        } else if (DiaSemana == 2) {
            ValorCompra = ValorCompra * 0.85;
            printf("O valor da compra com desconto é R$ %.2f\n", ValorCompra);
        } else {
            printf("Dia da semana inválido.\n");
        }
    } else {
        printf("O valor da compra sem desconto é R$ %.2f\n", ValorCompra);
    }

    return 0;
}
