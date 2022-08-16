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
	

	printf("\nO maior valor dos elementos: %d\n\n", maiorValor(vet, qtd));
	printaVetor(vet, qtd);
		
}
