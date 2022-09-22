//Biblioteca para uso na prova
// Não alterar a biblioteca, caso precise alterar a função, copie e cole em seu código .c
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//------------------------------------
void printVet(int v[], int n){
	int i;
	for(i=0;i<n;i++)
	   printf("%2d |",v[i]);
	
	printf("\n");   
}
//----------------------------------------
void geraMatrix(int m[][100], int linhas,int cols){
	int i,j;
	srand(time(NULL));
	//_sleep(1000);
	for(i=0;i<linhas;i++){
		for(j=0;j<cols;j++){
			m[i][j]=rand()%50;
		}// fim for j
	}// fim for i
	for(i=0;i<linhas;i++){
		m[i][0]=0;
	}// fim for
	for(i=0;i<cols;i++){
		m[0][i]=0;
	}// fim for
}// fim funcao gera
//----------------------------------------
void printMatrix(int m[][100], int linhas, int cols){
	int i,j;
	for(i=0;i<linhas;i++){
		for(j=0;j<cols;j++){
			printf("%2d |",m[i][j]);
		}// fim for j
		printf("\n");
	}// fim for i
}// fim funcao printMatriz
//------------------------------------------------
//Biblioteca para uso na atividade avaliativa
