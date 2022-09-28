#include <stdlib.h>
#include "matrixlib.h"

void main(){
	
	int m1[2][100], m2[3][100], mult[100][100], j = 0;
	
	printf("Insira os valores da primeira matriz: \n");
	leiaMatrix(m1, 2, 3);
	printf("Insira os valores da segunda matriz: \n");
	leiaMatrix(m2, 3, 2);

	for(int i = 0; i < 2; i++){
		mult[i][0] = ((m1[i][0] * m2[0][i]) + (m1[i][1] * m2[1][i]) + (m1[i][2] * m2[2][i]));
		mult[i][1] = ((m1[i][1] * m2[1][i]) + (m1[i][2] * m2[2][i]) + (m1[i][3] * m2[3][i]));	
	}
	
	printMatrix(mult, 2, 2);

}
