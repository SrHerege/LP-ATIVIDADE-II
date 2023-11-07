#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

int notas, i;
float nota, soma = 0.0;

    printf("Digite a quantidade de notas: ");
    scanf("%i", &notas);

    for(i = 0; i <notas; i++) {
        printf("Digite a nota %i: ", i + 1);
        scanf("%f", &nota);
        soma += nota;
    }

    printf("A Média das notas é: %.2f\n", soma / notas);

    return 0;
}    