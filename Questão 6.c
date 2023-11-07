#include <stdio.h>
#include <locale.h>

int main (){
    setlocale(LC_ALL, "Portuguse");
int codigo; 

printf(":TABELA DE PRODUTOS: \n");
printf("1-----------Camiseta \n");
printf("2-----------Calça \n");
printf("3-----------Sapato \n");

printf("Digite o codigo do produto: \n");
scanf("%i", &codigo); 

switch (codigo) {
 case 1:
     printf("Você Selecionou Camiseta - Preço R$ 75,00\n");
     break;
case 2:
     printf("Você Selecionou Calça - Preço R$ 100,00\n");
     break;
case 3:
     printf("Você Selecionou Sapato - Preço R$ 200,00\n");
     break;
default: 
    printf("Codigo de produto Inválido!\n");
    break;                
}
return 0; 

}