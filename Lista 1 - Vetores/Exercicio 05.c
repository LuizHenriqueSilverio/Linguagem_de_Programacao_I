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
	
	for(int i = 0; i < num; i++){
		switch(dna[i]){
			case 'A':
				dnaComp[i] = 'T';
				break;
			case 'T':
				dnaComp[i] = 'A';
				break;
			case 'C':
				dnaComp[i] = 'G';
			 	break;
			case 'G':
				dnaComp[i] = 'C';
				break;
		}
	}
	dnaComp[num] = '\0'; // Assinala caractere terminador(byte nulo) no final do vetor char(string);

	printf("\n*** FITA PRINCIPAL ***\n");
	puts(dna);
	printf("\n*** FITA COMPLEMENTAR ***\n");
	puts(dnaComp);
	
	return 0;
}
