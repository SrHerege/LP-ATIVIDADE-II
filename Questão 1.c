#include <stdio.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL, "Portuguese");
	
float temperatura; 

printf("Digite a temperatura: ");
scanf("%f", &temperatura);

if (temperatura > 25){
	
	printf("O clima � ensolarado. \n");
	
} else if (temperatura <15) {
	
	printf("O clima � de chuva\n");	
	
} else {	

	printf("O Clima � nublado\n");
}
	
return 0;
}

