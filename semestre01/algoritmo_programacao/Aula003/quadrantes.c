#include <stdio.h>

void pontos();
void quandrante(int x, int y);

/* funcao para selecionar os pontos entrados pelo usuario */
void pontos(){
	int x, y;
	printf("Digite o X: "); scanf("%d", &x);
	printf("Digite o Y: "); scanf("%d", &y);
	
	quadrante(x, y);	
}

/* funcao para identificar em que quadrante esses pontos se localizam */
void quadrante(int x, int y){

		if(x > 0 && y > 0){
			printf("1 Quadrante");
		}else if(x > 0 && y < 0){
			printf("4 Quadrante");
		}
		
		if(x < 0 && y > 0){
			printf("2 Quadrante");
		}else if(x < 0 && y < 0){
			printf("3 Quadrante");
		}
		
		if(x == 0 && y == 0){
			printf("Origem");
		}else if (x == 0) {
    		printf("Eixo Y");
		} else if (y == 0) {
    		printf("Eixo X");
		}
}

/* main */
int main(){
	pontos();
	return 0;
}
	
