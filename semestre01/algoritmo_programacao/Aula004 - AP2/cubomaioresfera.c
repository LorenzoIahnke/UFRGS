#include <stdio.h>
#include <math.h>

// função para calcular
void calcular(float raio){
    float lado, volume, area;
    lado = (2 * raio)/(sqrt(3));

    volume = lado * lado * lado;

    area = 6 * (lado * lado);

    printf("Lado: %.2f\n", lado);
    printf("Volume: %.2f\n", volume);
    printf("Ara: %.2f\n", area);
}
// função pergunta usuário na main
void pergunta(){
    float raio;
    printf("Digite um raio: "); scanf("%f", &raio);
    calcular(raio);

}

//main
int main(){
    float raio;
    // continue mostrando o programa até que o usuário acerte o raio certo
    do{
        pergunta();
        if(raio <= 0){
            printf("\nValor inválido, tente novamente\n");
        }
    }while(raio <= 0);

    return 0;
}





