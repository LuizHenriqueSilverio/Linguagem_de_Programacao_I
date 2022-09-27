#include <stdlib.h>
#include "matrixlib.h"

int mapaDeBits(int m[][100], int ordem){
	int res = 1;
	for(int i = 0; i < ordem; i++){
		for(int j = 0; j < ordem; j++){
			if(m[i][j] != 1 && m[i][j] != 0){
				res = 0;
			}
		}
	}
	
	return res;
}

void main(){
	
	int mat[100][100], ordem, res;
	
	printf("Insira a ordem da matriz: ");
	scanf("%d", &ordem);
	
	leiaMatrix(mat, ordem, ordem);
	res = mapaDeBits(mat, ordem);
	printMatrix(mat, ordem, ordem);
	
	if(res == 1){
		printf("\nA matriz e um bitmap!");
	}else{
		printf("\nA matriz nao e um bitmap!");
	}
	
}
