#include <stdio.h>
#include <stdlib.h>

int contaImpar(int vetor[], int n){
	int impar = 0;
	
	for(int i = 0; i < n; i++){
		if(vetor[i] % 2 != 0){
			impar++;
		}
		printf("%d |", vetor[i]);
	} 
	
	return impar;
}

int main(){
	
	int qtd;
	srand(time(NULL));
	
	printf("Insira a quantidade de elementos: ");
	scanf("%d", &qtd);
	int vet[qtd];
	
	for(int i = 0; i < qtd; i++){
		vet[i] = rand();
	}
	
	printf("\nA quantidade de elementos impares no vetor: %d", contaImpar(vet, qtd));
	
	return 0;
}
