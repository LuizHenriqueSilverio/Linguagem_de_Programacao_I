#include <stdlib.h>
#include <stdio.h>
#include "vetlib.h"

void main(){
	
	float nota[5], soma = 0, menor, maior;
	int x = 0, y = 0;
	
	printf("Insira as notas da escola de samba: ");
	leiaVetorfloat(nota, 5);
	
	menor = menorValorfloat(nota, 5);
	maior = maiorValorfloat(nota, 5);
	
	for(int i = 0; i < 5; i++){
		if(nota[i] == menor && x == 0){
			nota[i] = 0;
			x = 1;
		}else if(nota[i] == maior && y == 0){
			nota[i] = 0;
			y = 1;
		}
	}
	
	printf("Nota final da escola: %.1f", somaVetorfloat(nota, 5));
	
}
