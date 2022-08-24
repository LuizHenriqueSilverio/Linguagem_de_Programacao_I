#include <stdio.h>
#include "vetlib.h"


void main(){
	
	int qtd;
	
	
	printf("Insira a quantidade de elementos: ");
	scanf("%d", &qtd);
	int vet[qtd];
	
	leiaVetor(vet, qtd);
	printf("\nO maior valor dos elementos: %d\n\n", maiorValor(vet, qtd));
	printaVetor(vet, qtd);
		
}
