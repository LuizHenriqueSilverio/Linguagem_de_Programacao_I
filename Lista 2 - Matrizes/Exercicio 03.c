#include <stdlib.h>
#include "matrixlib.h"

void main(){
	
	int mat[100][100], lin, cols, menor;
	
	printf("Insira a quantidade de linhas e colunas da matriz: ");
	scanf("%d%d", &lin, &cols);
	
	leiaMatrix(mat, lin, cols);
	printMatrix(mat, lin, cols);
	
	menor = menorMatrix(mat, lin, cols);
	
	printf("\nO menor numero da matriz: %d", menor);
}
