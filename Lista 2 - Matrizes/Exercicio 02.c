#include <stdlib.h>
#include "matrixlib.h"

void main(){
	
	int mat[100][100], lin, cols, maior;
	
	printf("Insira a quantidade de linhas e colunas da matriz: ");
	scanf("%d%d", &lin, &cols);
	
	leiaMatrix(mat, lin, cols);
	printMatrix(mat, lin, cols);
	
	maior = maiorMatrix(mat, lin, cols);
	
	printf("\nO maior numero da matriz: %d", maior);
}
