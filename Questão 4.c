#include <stdio.h>
#include <locale.h>



int main() {
	setlocale(LC_ALL, "Portuguese");
	
    int idade;
    
    printf("Digite a sua idade: ");
    scanf("%i", &idade);

    if (idade >= 18) {
        printf("Acesso permitido! \n");
    } else {
        printf("Acesso negado! \n");
    }


return 0;
}

