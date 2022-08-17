#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void main(){
	
	char palavra[100];
	int tamanho;
	
	printf("Insira a string: ");
	gets(palavra);
	tamanho = strlen(palavra);
	
	printf("\nString inserida, ao contrario: ");
	for(int i = 0; i < tamanho; i++){
		printf("%c", palavra[tamanho-1-i]);
	}
}
