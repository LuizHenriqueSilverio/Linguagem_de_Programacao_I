#include <stdlib.h>
#include <stdio.h>

void geraVetor(int v[], int n, int m){
	srand(time(NULL));
	for(int i = 0; i < n; i++){
		v[i] = rand()%m + 1;
	}
}
// ------------------------------------

void leiaVetor(int v[], int n){
	int x;
	for(int i = 0; i < n; i++){
		printf("Insira o valor da posicao [%d]: ", i);
		scanf("%d", &x);
		v[i] = x;
	}
}

//-------------------------------------

void leiaVetorfloat(float v[], int n){
	float x;
	for(int i = 0; i < n; i++){
		printf("Valor[%d]: ", i);
		scanf("%f", &x);
		v[i] = x;
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

float somaVetorfloat(float v[], int n){
	float soma = 0;
	
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

float maiorValorfloat(float v[], int n){
	float maior = v[0];
	
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

float menorValorfloat(float v[], int n){
	float menor = v[0];
	
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

//-------------------------------------
