#include <stdio.h>
#include <locale.h>

int main (){
    setlocale(LC_ALL, "Portuguse");
int codigo; 

printf(":TABELA DE PRODUTOS: \n");
printf("1-----------Camiseta \n");
printf("2-----------Cal�a \n");
printf("3-----------Sapato \n");

printf("Digite o codigo do produto: \n");
scanf("%i", &codigo); 

switch (codigo) {
 case 1:
     printf("Voc� Selecionou Camiseta - Pre�o R$ 75,00\n");
     break;
case 2:
     printf("Voc� Selecionou Cal�a - Pre�o R$ 100,00\n");
     break;
case 3:
     printf("Voc� Selecionou Sapato - Pre�o R$ 200,00\n");
     break;
default: 
    printf("Codigo de produto Inv�lido!\n");
    break;                
}
return 0; 

}