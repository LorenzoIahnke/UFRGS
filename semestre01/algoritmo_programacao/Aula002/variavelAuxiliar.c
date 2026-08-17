#include <stdio.h>

int main(){
	int n1, n2, aux;
	
	printf("Valor 1: \n"); scanf("%d", &n1);
	printf("Valor 2: \n"); scanf("%d", &n2);
	
	printf("Antes da Troca: %d e %d\n", n1, n2);
	
	aux = n1;
	n1 = n2;
	n2 = aux;
	
	printf("Depois da Troca: %d e %d", n1, n2);
	
	return 0;
}
