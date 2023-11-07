#include <stdio.h>
#include <locale.h>


int main() {
     setlocale(LC_ALL, "Portuguese");

int idioma;

   printf ("ESCOLHA UM IDIOMA PARA PROSSEGUIR:  \n");  
          printf ("1------------Inglês\n");
          printf ("3------------Francês\n");
          printf ("2------------Espanhol\n");
          

    printf("Escolha um idioma de sua preferência: ");
    scanf("%d", &idioma);

    switch(idioma) {
        case 1:
            printf("Welcome!\n");
            break;
        case 2:
            printf("Bienvenido!\n");
            break;
        case 3:
            printf("Bienvenue!\n");
            break;
        default:
            printf("Idioma inválido.\n");
            break;
    }

    return 0;
}
