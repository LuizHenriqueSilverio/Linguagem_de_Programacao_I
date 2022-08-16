#include <stdio.h>
#include <stdlib.h>
#include "vetlib.h"

int main(){
	
	int qtd;
	
	printf("Insira a quantidade de elementos: ");
	scanf("%d", &qtd);
	int vet[qtd];
	geraVetor(vet, qtd);
	
	printf("\nA quantidade de elementos impares no vetor: %d", contaImpar(vet, qtd));
	
	return 0;
}
