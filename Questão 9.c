#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int numero, i, NumeroPrimo = 1;

    printf("Digite um n�mero inteiro: ");
    scanf("%i", &numero);

    for (i = 2; i <= numero / 2; i++)
    {
        if (numero % i == 0)
        {
            NumeroPrimo = 0;
            break;
        }
    }

    if (NumeroPrimo == 1 && numero > 1)
    {
        printf("O n�mero inserido � primo!\n");
    }
    else
    {
        printf("n�mero inserido n�o � primo!\n");
    }

    return 0;
}
