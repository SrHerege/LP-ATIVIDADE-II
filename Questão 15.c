#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Porguese");
    int opcao;
    float valor;

    do
    {

        printf("Opções de Conversão:\n");
        printf("1 -- Quilometros para milhas\n");
        printf("2 -- Celsius para Fahrenheit\n");
        printf("0 -- Sair\n");
        printf("Escolha uma Opção: ");
        scanf("%i", &opcao);

        switch (opcao)
        {
        case 1:
            printf("Digite o valor em quilometros: ");
            scanf("%f", &valor);
            printf("%.2f Quilometros é igual a %.2f milhas\n", valor, valor * 0.621371);
            break;
        case 2:
            printf("Digite o valor em Celsius: ");
            scanf("%f", &valor);
            printf("%.2f graus Celsius é igual a %.2f graus Fahrenheit\n", valor, valor * 9 / 5 + 32);
            break;
        case 0:
            printf("Saindo do programa, Até mais! \n");
            break;
        default:
            printf("Opção Invalida!\n");
            break;
        }
    } while (opcao != 0);

    return 0;
}
