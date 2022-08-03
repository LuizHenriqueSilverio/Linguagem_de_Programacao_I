#include <stdio.h>

int somaVetor(int vetor[], int n){
	
	int soma, x;
	
	for(int i = 0; i < n; i++){
		printf("Insira o elemento da posicao [%d]: ", i);
		scanf("%d", &x);
		vetor[i] = x;
		soma = soma + vetor[i];
	}
	
	return soma;
}


int main(){
	
	int qtdElementos, vet[100];
	
	printf("Insira a quantidade de elementos do vetor: ");
	scanf("%d", &qtdElementos);
	printf("A soma dos valores do vetor: %d", somaVetor(vet, qtdElementos));
	
	return 0;
}
