#include <stdio.h>
#include "vetlib.h"

int main(){
	
	int qtdElementos, vet[100], num;
	
	printf("Insira a quantidade de elementos do vetor: ");
	scanf("%d", &qtdElementos);
	for(int i = 0; i < qtdElementos; i++){
		printf("Insira o elemento da posicao [%d]: ", i);
		scanf("%d", &num);
		vet[i] = num;
	}
	printf("A soma dos valores do vetor: %d", somaVetor(vet, qtdElementos));
	
	return 0;
}
