#include <stdlib.h>
#include <stdio.h>

int treinaDragao(int v[]){
	int tempo = 0;
	while(v[0] < 300 || v[2] < 10){
		v[0] = v[0] + 10;
		v[2] = v[2] + 2;
		tempo++;
	}
	return tempo;
}

int main(){
	
	int atributos[5], dias = 0;
	
	printf("Entre com as caracteristicas do dragao(nessa ordem: Tamanho, Forca, Fogo, Velocidade, Inteligencia): ");
	
	for(int i = 0; i < 5; i++){
		scanf("%d", &atributos[i]);
	}
	
	dias = treinaDragao(atributos);
	printf("\nDias necessarios para treinar o dragao: %d", dias);
	getc();
	
	return 0;
}
