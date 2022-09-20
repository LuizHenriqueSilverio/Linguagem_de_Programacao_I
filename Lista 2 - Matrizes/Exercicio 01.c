#include <stdlib.h>
#include "matrixlib.h"



void main(){
	
	int mat[100][100], lin, cols, x, cont = 0;
	
	printf("Insira a quantidade de linhas e colunas da matriz: \n");
	scanf("%d%d", &lin, &cols);
	geraMatrix(mat, lin, cols);
	
	printf("Insira um numero: ");
	scanf("%d", &x);
	
	for(int i = 0; i < lin; i++){
		for(int j = 0; j < cols; j++){
			if(mat[i][j] > x){
				cont++;
			}
		}
	}
	
	printf("Existem %d numeros maior que %d na matriz.\n\n", cont, x);
	printMatrix(mat, lin, cols);
		
}
