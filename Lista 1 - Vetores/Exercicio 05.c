#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(){
	
	char dna[50], dnaComp[50];
	int num;
	
	printf("Insira a sequencia da fita de DNA: ");
	gets(dna);
	strupr(dna);
	num = strlen(dna);
	
	printf("\n");
	puts(dna);
	
	return 0;
}
