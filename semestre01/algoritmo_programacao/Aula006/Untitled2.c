#include <stdio.h>

int main(){
	int n;
	int i = 1;
	
	printf("Digite um valor: "); scanf("%d", &n);
	if(n < 1 || n > 9){
		printf("Valor Inválido!");
		return 1;
	}
	while(i <= n){
		int j = 1;
		while(j <= n){
			printf("%02d ", i*j);
			j++;
		}
		
		printf("\n");
		i++;
	}
	
	return 0;
}
