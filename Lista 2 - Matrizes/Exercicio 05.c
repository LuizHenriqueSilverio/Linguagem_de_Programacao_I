#include <stdlib.h>
#include "matrixlib.h"

void main(){
	
	int mat[100][100], ordem, j = 0;
	
	printf("Insira a ordem da matriz: ");
	scanf("%d", &ordem);
	
	geraMatrix(mat, ordem, ordem);
	printMatrix(mat, ordem, ordem);
	
	printf("Diagonal principal: ");
	for(int i = 0; i < ordem; i++){
		printf("%d |", mat[i][j]);
		j++;
	}
}
