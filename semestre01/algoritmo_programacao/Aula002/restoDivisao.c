#include <stdio.h>

int main(){
	
	int n1, n2;

	printf("Valor 1: \n"); scanf("%d",&n1);
	printf("Valor 2: \n"); scanf("%d", &n2);
		
	printf("Valor do quociente: %d\nValor do resto: %d", n1/n2, n1*n2);
	
	return 0;
}
