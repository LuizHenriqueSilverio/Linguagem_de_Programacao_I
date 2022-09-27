#include <stdlib.h>
#include "matrixlib.h"

void matIdentidade(int m[][100], int ordem){
	for(int i = 0; i < ordem; i++){
		for(int j = 0; j < ordem; j++){
			if(i == j){
				m[i][j] = 1;
			}else{
				m[i][j] = 0;
			}
		}
	}
}

void main(){

	int mat[100][100], ordem;
	
	printf("Insira a ordem da matriz: ");
	scanf("%d", &ordem);
	
	matIdentidade(mat, ordem);
	printf("Identidade matriz de ordem %d: \n", ordem);
	printMatrix(mat, ordem, ordem);
	
}
