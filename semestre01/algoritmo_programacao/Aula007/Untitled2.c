#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int n, i;
	int fat = 1;
	
	printf("Digite um número: "); scanf("%d", &n);
	for(i = 0; i < n; i++){
		fat = fat * (i + 1);
		
	}
	
	printf("Fatorial de %d: %d", n, fat);
	
	return 0;
}
