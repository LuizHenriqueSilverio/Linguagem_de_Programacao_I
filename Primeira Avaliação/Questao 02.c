#include <stdlib.h>
#include "bibliotecaProva.h"

int precipitacao(int m[][100], int lin){
	int soma = 0;
	for(int i = 1; i < 32; i++){
		soma = soma + m[lin][i];
	}
	
	return soma;
}

int main(){
	
	int cal[13][100], mes, total = 0;
	
	geraMatrix(cal, 13, 32);
	printMatrix(cal, 13, 32);
	
	printf("Insira um mes para soma de chuva: ");
	scanf("%d", &mes);
	
	total = precipitacao(cal, mes);
	printf("Soma da chuva no mes %d: %d", mes, total);
	
	return 0;
}
