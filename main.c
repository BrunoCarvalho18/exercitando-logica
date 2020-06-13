#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	double moedaReais,calculoConversao;
	
	printf("Digite a quantidade de R$ que voce quer converter para euro: ");
	scanf("%lf",&moedaReais);
	
	calculoConversao = moedaReais / 5.71;
	
	printf("A quantidade de euros e = %f ",calculoConversao);
	printf("\n");
	
	system("pause");
	
	return 0;
}
