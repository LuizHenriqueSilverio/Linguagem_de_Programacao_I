#include <stdio.h>
#include "vetlib.h"

void main(){
	
	int qtd, num;
	
	
	printf("Insira a quantidade de elementos: ");
	scanf("%d", &qtd);
	int vet[qtd];
	

	for(int i = 0; i < qtd; i++){
		printf("Insira o valor do elemento da posicao [%d]: ", i);
		scanf("%d", &num);
		vet[i] = num;
	}
	

	printf("\nO menor valor dos elementos: %d\n\n", menorValor(vet, qtd));
	printaVetor(vet, qtd);
		
}
