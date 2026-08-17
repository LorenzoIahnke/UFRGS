#include <stdio.h>

int main(){
	float peso, altura;
	
	printf("Peso: "); scanf("%f", &peso);
	printf("Altura: "); scanf("%f", &altura);
	
	printf("IMC: %.2f", peso/(altura*altura));
	
	return 0;
}
