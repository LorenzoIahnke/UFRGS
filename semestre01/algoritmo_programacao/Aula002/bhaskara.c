#include <stdio.h>
#include <math.h>

int main(){
	int a, b, c, delta;
	float x1, x2;
	
	printf("Coeficiente a: "); scanf("%d", &a);
	printf("\nCoeficiente b: "); scanf("%d", &b);
	printf("\nCoeficiente c: "); scanf("%d", &c);
	
	delta = (b * b) - 4*a*c;
	x1 = (-b + delta)/(2*a);
	x2 = (-b - delta)/(2*a);
	
	printf("Raízes são: %.2f e %.2f", x1, x2);
	
	return 0;
}
