#include <stdio.h>

// protótipos
int validadetriangulo(int a, int b, int c);
void qualtriangulo(int a, int b, int c);

// função pergunta entradas para o usuário
void pergunta(){
    int a, b, c;
        printf("Lado 1: "); scanf("%d", &a);
        printf("Lado 2: "); scanf("%d", &b);
        printf("Lado 3: "); scanf("%d", &c);

    // condição para a "função qualtriangulo()" ser executada corretamente
    if(validadetriangulo(a, b, c)){
        qualtriangulo(a, b, c);
    }
}

// função responsável por verificar se os valores entrados formam um triangulo ou nao
int validadetriangulo(int a, int b, int c){
    if(a + b <= c || b + c <= a || a + c <= b){
        printf("Nao e triangulo!\n");
        // return 0 = falso
        return 0;
    }else{
        printf("E triangulo!\n");
        // return 1 = verdadeiro
        return 1;
    }
}

// função para identidicar o tipo de triangulo formado
void qualtriangulo(int a, int b, int c){
    if(a == b && a == c){
        printf("Triangulo Equilatero!\n");
    } else if(a != b && b != c && a != c){
        printf("Triangulo Escaleno!\n");
    } else {
        printf("Triangulo Isoceles!\n");
    }
}

// função main
int main(){

    pergunta();
    return 0;

}
