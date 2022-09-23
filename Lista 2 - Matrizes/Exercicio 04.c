#include <stdlib.h>
#include "matrixlib.h"

void main(){
	
	int mat[100][100], lin, cols, qtd, num;
	
	printf("Insira o numero de linhas e colunas da matriz: ");
	scanf("%d%d", &lin, &cols);
	
	geraMatrix(mat, lin, cols);
	
	printf("Insira um numero: ");
	scanf("%d", &num);
	
	printMatrix(mat, lin, cols);
	qtd = contaMatrix(mat, lin, cols, num);
	printf("\nO numero %d aparece na matriz %d vez(es).", num, qtd);
}
