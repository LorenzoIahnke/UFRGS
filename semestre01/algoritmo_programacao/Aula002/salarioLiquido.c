#include <stdio.h>
/*
	Escrever um programa para calcular o salário líquido de um funcionário.
		É o salário que o funcionário recebe, efetivamente, depois de descontados os impostos.
		salário líquido = salário bruto – INSS – IRPF
	O usuário deve fornecer o número de horas trabalhadas e o salário por hora.
	O programa deve calcular:
		O salário bruto
			salário bruto = horas x salário por hora
		O desconto de INSS, que corresponde a 10% do salário bruto
			inss = 0,1 x salário bruto
		O desconto do IRPF, que corresponde a 7% daquilo que sobrou do salário bruto, 
		após ter sido descontado o INSS
			irpf = 0,07 x (salário bruto – inss)
	Deve ser apresentado na tela:
		Salário por hora, Horas trabalhadas e Salário bruto
		Desconto do INSS, Desconto do IRPF e Salário líquido

*/
int main(){
	int horasTrabalhadas; 
	float salarioHora, salarioBruto, inss, irpf, salarioLiquido;
	
	printf("N° Horas Trabalhadas: "); scanf("%d", &horasTrabalhadas);
	printf("Salario por Hora: "); scanf("%f", &salarioHora);
	
	salarioBruto = horasTrabalhadas * salarioHora;
	inss = 0.1 * salarioBruto;
	irpf = 0.7 * (salarioBruto - inss);
	salarioLiquido = salarioBruto - inss - irpf;
	
	printf("\nSalario por Hora: %.2f", salarioHora);
	printf("\nHoras Trabalhadas: %d", horasTrabalhadas);
	printf("\nSalario Bruto: %.2f", salarioBruto);
	printf("\n------------------------\n");
	printf("\nDesconto INSS: %.2f", inss);
	printf("\nDesconto IRPF: %.2f", irpf);
	printf("\nSalario Liquido: %.2f", salarioLiquido);
	
	return 0;
	
	
}
