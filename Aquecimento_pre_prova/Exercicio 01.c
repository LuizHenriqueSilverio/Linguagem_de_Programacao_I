#include <stdio.h>
#include <ctype.h>
#include <string.h>

int possuiCodon(char v[], int n){
    int res = 0;
    for(int i=0; i<n-2; i++){
        if(v[i] == 'A' && v[i+1] == 'T' && v[i+2] == 'G'){
            res = 1;
        }
    }
    return res;
}

void main(){

    char dna[100];
    int tamanho;
    printf("Sequencia de DNA: ");
    fflush(stdin);
    gets(dna);
    strupr(dna);
    tamanho = strlen(dna);

    if(possuiCodon(dna,tamanho) == 1){
        printf("EXISTE");
    }else{
        printf("INEXISTENTE");
    }
}