#include <stdlib.h>
#include "matrixlib.h"

void main(){
	
	int mat[10][100], op, ordem, det, res;
	
	printf("Selecione a ordem da matriz:\n1- Ordem 2\n2- Ordem 3\n");
	scanf("%d", &op);
	
	
	if(op == 1){
		int aux1, aux2;
		ordem = 2;
		leiaMatrix(mat, ordem, ordem);
		
		aux1 = mat[0][0] * mat[1][1];
		aux2 = mat[0][1] * mat[1][0];
		res = aux1 - aux2;
	}else{
		int aux1[3], aux2[3], aux3[3];
		ordem = 3;
		leiaMatrix(mat, ordem, ordem);
		
		for(int i = 0; i < ordem; i++){
			
		}
		
	}
	
	
	printf("\n%d", res);
	
}
