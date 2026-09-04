#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float UR = 0;
	float valor, resultado;
	char operacao;
	
	do{
	
	printf("UR: %.2f", UR);
	printf("\nOperação: "); scanf(" %c", &operacao);
	
	
	switch(operacao){
		case '+': case '-': case '*': case '/':
			printf("Valor: "); scanf("%f", &valor);
	}
	switch(operacao){
		case '+': UR += valor; break;
		case '-': UR -= valor; break;
		case '*': UR *= valor; break;
		case '/': UR /= valor; break;
		case 'C': case 'c': UR == 0; break;
	}
	}while(operacao != 'f' && operacao != 'F');
	
	return 0;
}
