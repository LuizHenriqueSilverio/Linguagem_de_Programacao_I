#include <stdio.h>
#include "vetlib.h"

void main(){
	
	int num, soma = 0, valor;
	
	printf("Insira o tamanho do vetor: ");
	scanf("%d", &num);
	int vet[num];
	geraVetor(vet, num, 50);
	
	printaVetor(vet, num);
	printf("\n\n");
	printf("Valor para busca: ");
	scanf("%d", &valor);
	
	for(int i = 0; i < num; i++){
		if(vet[i] == valor){
			soma++;
		}
	}	
	
	printf("O elemento %d aparece %d vezes no vetor", valor, soma);
	
}
