#include <stdio.h>
#include "matrixlib.h"

void main(){

    int mat[100][100], lin, cols, par = 0, impar = 0;

    printf("Insira a quantidade de linhas e colunas: \n");
    printf("Linhas: ");
    scanf("%d", &lin);
    printf("Colunas: ");
    scanf("%d", &cols);
    geraMatrix(mat, lin, cols);

    for(int i = 0; i < lin; i++){
        for(int j = 0; j < cols; j++){
            if(mat[i][j] % 2 == 0){
                par++;
            }else{
                impar++;
            }
        }
    }

    printMatrix(mat, lin, cols);
    printf("\nPares: %d\n", par);
    printf("Impares: %d\n", impar);
}