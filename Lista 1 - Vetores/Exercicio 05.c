#include <stdio.h>
#include <stdlib.h>

int main(){
	
	char dna[50];
	int num, base;

	printf("Insira o tamanho da fita de gene de DNA(max 50): ");
	scanf("%d", &num);
	char dnaComp[num];
	
	for(int i = 0; i < num; i++){
		printf("\nInsira a letra correspondente a base na posicao [%d]:\n", i + 1);
		printf("1 - A\n2 - T\n3 - C\n4 - G\nOpcao: ");
		scanf("%d", &base);
		switch(base){
			case 1:
				dna[i] = 'A';
				dnaComp[i] = 'T';
				break;
			case 2:
				dna[i] = 'T';
				dnaComp[i] = 'A';
				break;
			case 3:
				dna[i] = 'C';
				dnaComp[i] = 'G';
				break;
			case 4:
				dna[i] = 'G';
				dnaComp[i] = 'C';
				break;
			default:
				printf("\nComando invalido!!!Tente novamente!\n\n\n");
				i--;
				break;
		}
	}
	
	printf("Fita de Gene 1: ");
	for(int i = 0; i < num; i++){
		printf("%c", dna[i]);
	}
	printf("\nFita de Gene 2: ");
		for(int i = 0; i < num; i++){
		printf("%c", dnaComp[i]);
	}
	
	return 0;
}
