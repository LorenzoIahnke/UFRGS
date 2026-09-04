#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int n, i;
	
	printf("Digite uma faixa de valor de 0 até N: "); scanf("%d", &n);
	
	for(i = 0; i <= n; i++){
		
		if(i % 2 == 1){
			printf("%d ", i);
		}
		
	}
	
	return 0;
}
