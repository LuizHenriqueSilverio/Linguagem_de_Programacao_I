#include <stdio.h>

int menorValor(int vetor[], int n){
	int menor = vetor[0];
	
	for(int i = 0; i < n; i++){
		if(vetor[i] < menor){
			menor = vetor[i];
		}
	}
	
	return menor;
}


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
	

	printf("O menor valor dos elementos: %d\n\n", menorValor(vet, qtd));
	for(int i = 0; i < qtd; i++){
		printf("%d |", vet[i]);
	}
		
}
