#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
int opcao = 0;

printf("OPÇÕES:\n");
printf("1 -- Novo Jogo\n");
printf("2 -- Carregar Jogo\n");
printf("3 -- Configurações\n");
printf("Escolha uma opção: \n");
scanf("%i", &opcao); 

switch(opcao){
  case 1:
      printf("Iniciando New Game\n");
      break;
  case 2:
      printf("Carregando Jogo\n");
      break;
  case 3:
      printf("Abrindo Configurações");
      break; 
  default: 
      printf("Opção Inválida! \n");
      break;
}  

 return 0;            
    

}