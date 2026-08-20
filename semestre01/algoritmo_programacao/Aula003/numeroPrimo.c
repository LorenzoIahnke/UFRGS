#include <stdio.h>

void numeroPrimo(int x){
	int i = 2;
	int primo = 1;
	
	while(i < x){
		/* Se o resto da divisão do valor entrado com 2 for igual a 0,
		o primo será considerado falso, vai sair da condição, e será adicionado
		mais um até chegar no valor entrado pelo usuário */
		if(x % i == 0){	
			primo = 0;
			break;
		}
		
		i++;		
	}
	
	if(primo){
		printf("\n%d e um numero primo\n", x);
	}else{
		printf("\n%d nao e um numero primo\n", x);
	}
}

int perguntar(){
	int x;
	printf("Digite um numero: "); scanf("%d", &x);
	return x;
}

int main(){
	int x;

	do{
		x = perguntar();
		if(x < 2 || x > 100){
			printf("\nNumero fora da faixa. Apenas entre 2 - 100\n");		
		}	
	}while(x < 2 || x > 100);
	
	numeroPrimo(x);
	return 0;
}
