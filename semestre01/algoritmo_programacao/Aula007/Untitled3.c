#include <stdio.h>
#include <locale.h>

int main(){
	char i;
	int j;
	
	
	/* char representado por inteiros*/
	for(i = 65; i <= 90; i++){
		
		printf("%c ", i);
	}
	
	printf("\n");
		
	/* char representando inteiros*/
	for(i = 65; i <= 90; i++){
		
		printf("%d ", i);
	}
	
	
	printf("\n");
	
	/* inteiros representando inteiros*/
	for(j = 'A'; j <= 'Z'; j++){
		
		printf("%d ", j);
	}

	printf("\n");
	
	/* inteiros representando chars*/
	for(j = 'A'; j <= 'Z'; j++){
		
		printf("%c ", j);
	}

	
}
