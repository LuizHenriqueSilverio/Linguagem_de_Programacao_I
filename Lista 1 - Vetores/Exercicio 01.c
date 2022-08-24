#include <stdio.h>
#include "vetlib.h"

int main(){
	
	int qtdElementos, vet[100];
	
	printf("Insira a quantidade de elementos do vetor: ");
	scanf("%d", &qtdElementos);

	leiaVetor(vet, qtdElementos);
	printf("A soma dos valores do vetor: %d", somaVetor(vet, qtdElementos));
	
	return 0;
}
