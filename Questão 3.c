#include <stdio.h>
#include <locale.h>

int main (){
	
	setlocale(LC_ALL, "Portuguese");
	
	float nota = 0; 
	
	printf("Digite a sua nota: ");
	scanf("%f", &nota);
	
	if (nota >= 9){
		printf("Classifica��o do aluno: Aluno Excelente\n");
	} else if (nota >= 7 && nota <9) {
		printf("Classifica��o do aluno: Bom Aluno \n");
	} else if (nota >= 5 && nota <7) {
		printf("Classifica��o do aluno: Aluno Razo�vel\n");
	} else {
		printf("Classifica��o do aluno: Nota Insuficiente\n");
	}
	
	

return 0;
}

