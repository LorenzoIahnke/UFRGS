#include <stdio.h>

int main(){
	int n;
	int maior = 0, menor = 0;
	
	do{
		printf("Digite um valor: "); scanf("%d", &n);
		
		if(n != 0){
		
			if(n > maior){
				maior = n;
		
			}else{
				menor = n;
			}
		}
		
	}while(n != 0);
	
	printf("Maior: %d", maior);
	printf("\nMenor: %d", menor);
	
}
