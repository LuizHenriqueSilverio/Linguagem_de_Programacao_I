#include <stdio.h>
#include "vetlib.h"

void main(){
	
	int num, soma = 0;
	
	printf("Insira o tamanho do vetor: ");
	scanf("%d", &num);
	int vet[num];
	leiaVetor(vet, num);
	
	for(int i = 0; i < num; i++){
		for(int j = 0; j < num; j++){
			if(vet[i] == vet[j]){
				soma++;
			}
		}
		printf("\nO elemento %d aparece %d vez(es) no vetor.\n", vet[i], soma);
		soma = 0;
	}
	
	printf("\n\n");
	printaVetor(vet, num);
	
}
