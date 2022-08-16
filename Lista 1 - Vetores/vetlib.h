#include <stdlib.h>
#include <stdio.h>

void geraVetor(int v[], int n){
	srand(time(NULL));
	for(int i = 0; i < n; i++){
		v[i] = rand()%51;
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
		printf("%d |", v[i]);
	}
}

//-------------------------------------

int somaVetor(int v[], int n){
	int soma = 0;
	
	for(int i = 0; i < n; i++){
		soma += v[i];
	}
	
	return soma;
}

//-------------------------------------

int maiorValor(int v[], int n){
	int maior = v[0];
	
	for(int i = 1; i < n; i++){
		if(v[i] > maior){
			maior = v[i];
		}
	}
	
	return maior;
}

//-------------------------------------

int menorValor(int v[], int n){
	int menor = v[0];
	
	for(int i = 1; i < n; i++){
		if(v[i] < menor){
			menor = v[i];
		}
	}
	
	return menor;
}

//-------------------------------------

int contaImpar(int v[], int n){
	int impar = 0;
	
	for(int i = 0; i < n; i++){
		if(v[i] % 2 != 0){
			impar++;
		}
		printf("%d |", v[i]);
	} 
	
	return impar;
}
