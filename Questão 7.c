#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
int opcao = 0;

printf("OP��ES:\n");
printf("1 -- Novo Jogo\n");
printf("2 -- Carregar Jogo\n");
printf("3 -- Configura��es\n");
printf("Escolha uma op��o: \n");
scanf("%i", &opcao); 

switch(opcao){
  case 1:
      printf("Iniciando New Game\n");
      break;
  case 2:
      printf("Carregando Jogo\n");
      break;
  case 3:
      printf("Abrindo Configura��es");
      break; 
  default: 
      printf("Op��o Inv�lida! \n");
      break;
}  

 return 0;            
    

}