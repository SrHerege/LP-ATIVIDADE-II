#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

int numero;

printf("Digite um número inteiro positivo: ");
scanf("%i", &numero);

while (numero >= 0) {
    switch (numero){
        case 5:
        printf("5 - 5 Minutos para chegar no senai\n");
        break;
        case 4:
        printf("4 - 4 Minutos para chegar no senai\n");
        break;
        case 3:
        printf("3 - 3 Minutos para chegar no senai\n");
        break;
        case 2:
        printf("2 - 2 Minutos para chegar no senai \n");
        break;
        case 1:
        printf("1 - 1 Minuto1 para chegar no senai\n");
        break;
        case 0:
        printf("0 - Você chegou no SENAI\n");
        break;
    }
    numero --;
}


}