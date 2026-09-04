#include <stdio.h>
#include <locale.h>
#define false 0
#define true 1

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int i, valor;
	int contaPar = 0;
	int soma = 0;
	int ePar = false;
	
	for(i = 0; i < 10; i++){
		printf("Digite um valor: "); scanf("%d", &valor);
		
		if(valor % 2 == 0){
			contaPar++; 
			ePar = true;
		} 
		
		soma += valor;
	}
	
	
	printf("\nQuantidade pares: %d", contaPar);
	printf("\nSoma dos valores: %d", soma);
	if(ePar) printf("\nPelo menos um dos valores é par.");
	
	return 0;
	
}
