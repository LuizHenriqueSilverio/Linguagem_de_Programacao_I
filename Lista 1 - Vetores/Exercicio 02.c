#include <stdio.h>

int maiorValor(int vetor[], int n){
	int maior = 0;
	
	for(int i = 0; i < n; i++){
		if(vetor[i] > maior){
			maior = vetor[i];
		}
	}
	
	return maior;
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
	

	printf("O maior valor dos elementos: %d\n\n", maiorValor(vet, qtd));
	for(int i = 0; i < qtd; i++){
		printf("%d |", vet[i]);
	}
		
}
