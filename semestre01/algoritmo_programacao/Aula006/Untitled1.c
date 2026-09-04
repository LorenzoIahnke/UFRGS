#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int n;
	
	printf("Digite um número: "); scanf("%d", &n);
	
	while(n <= 31){
		if(n % 2 ==  1){
			if(n % 7 == 0){
				printf("Não é possível múltiplos de 7!");
				break;
			}
			printf("%d ", n);
		}
		
		n++;
	}
 
	return 0;
}
