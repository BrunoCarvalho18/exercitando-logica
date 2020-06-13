#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int area,base, altura;	
	
	printf("Digite a base do triangulo: ");
	scanf("%d",&base);
	
	printf("Digite a altura do triangulo: ");
	scanf("%d",&altura);
	
	area = (base * altura) / 2 ;
	
	printf("a area do triangulo e = %d ", area);
	printf("\n");
	system("pause");	
	return 0;
}
