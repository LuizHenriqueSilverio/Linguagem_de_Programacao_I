#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void printMatrix(int m[][100],int lin,int cols){
	int i,j;
	for(i=0;i<lin;i++){
		for(j=0;j<cols;j++)
		   printf("%2d ",m[i][j]);
		printf("\n");   
	}// fim for i
}// fim funcao
//------------
void geraMatrix(int m[][100],int lin, int cols){
	int i,j;
	srand(time(NULL));
	for(i=0;i<lin;i++)
	  for(j=0;j<cols;j++)
	     m[i][j]=rand()%50;
}
//----------------
void leiaMatrix(int m[][100],int lin, int cols){
	int i,j;
	for(i=0;i<lin;i++)
	  for(j=0;j<cols;j++)
	     scanf("%d",&m[i][j]);
}
//-------------------
void carregaMatrix(int m[][100],int lin, int cols){
	FILE *arq;
	int i,j;
	arq= fopen("numeros.txt","r");
	if(arq==NULL)
	   printf("Arquivo nao encontrado\n");
	for(i=0;i<lin;i++){
	   for(j=0;j<cols;j++){
              fscanf(arq,"%d",&m[i][j]); 
		}// fim for j
	}// fim for i     
}
//--------------------
int menorMatrix(int m[][100], int lin, int cols){
	int i,j, menor = m[0][0];
	for(i=0;i<lin;i++)// linhas
		for(j=0;j<cols;j++) // colunas
			if(m[i][j]<menor)
				menor = m[i][j];
	
	return menor;
}


