#include <stdlib.h>
#include <stdio.h>

void geraVetor(int v[], int n){
	srand(time(NULL));
	for(int i = 0; i < n; i++){
		v[i] = rand()%21;
	}
}
// ------------------------------------

void leiaVetor(int v[], int n){
	for(int i = 0; i < n; i++){
		scanf("%d", &v[i]);
	}
}

//-------------------------------------

void printaVetor(int v[], int n){
	for(int i = 0; i < n; i++){
		printf("%d |\n", v[i]);
	}
}

//-------------------------------------

void somaVetor(int v[], int n){
	int soma = 0;
	
	for(int i = 0; i < n; i++){
		soma += v[i];
	}
	
	return soma;
}
