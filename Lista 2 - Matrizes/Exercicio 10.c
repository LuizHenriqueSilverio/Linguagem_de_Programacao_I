#include <stdlib.h>
#include "matrixlib.h"

void main(){
	
	int mat1[4][100], mat2[3][100];
	
	leiaMatrix(mat1, 4, 3);
	
	for(int i = 0; i < 4; i++){
		for(int j = 0; j < 3; j++){
			mat2[j][i] = mat1[i][j];
		}
	}
	
	printMatrix(mat1, 4, 3);
	printf("\n");
	printMatrix(mat2, 3, 4);
	
}
