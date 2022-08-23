#include <stdio.h>
#include "vetlib.h"

void main(){
	
	int num, face = 0;
	
	
	printf("Insira o numero de lancamentos do dado: ");
	scanf("%d", &num);
	int lanc[num];
	
	geraVetor(lanc, num, 6);
	printaVetor(lanc, num);
	
	for(int i = 1; i <= 6; i++){
		for(int j = 0; j < num; j++){
			if(lanc[j] == i){
				face++;
			}
		}
		printf("\nO elemento [%d] aparece %d vezes.\n", i, face);
		face = 0;
	}

}
