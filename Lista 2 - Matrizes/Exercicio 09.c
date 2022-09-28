#include <stdlib.h>
#include "matrixlib.h"

void main(){
	
	int mat1[100][100], mat2[100][100], matsum[100][100], ordem1, ordem2;
	
	printf("Insira a ordem da primeira e da segunda matriz: ");
	scanf("%d%d", &ordem1, &ordem2);
	
	geraMatrix(mat1, ordem1, ordem1);
	_sleep(1000);
	printMatrix(mat1, ordem1, ordem1);
	printf("\n\n");
	geraMatrix(mat2, ordem2, ordem2);
	printMatrix(mat2, ordem2, ordem2);
	printf("\n\n");
		
	printf("Somando as matrizes...\n");
	if(ordem1 != ordem2){
		printf("As matrizes nao sao de mesma ordem; nao eh possivel somar.");
	}else{
		somaMatrix(mat1, mat2, matsum, ordem1);
		printMatrix(matsum, ordem1, ordem1);
	}
	
	
}
