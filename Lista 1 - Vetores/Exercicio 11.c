#include <stdio.h>
#include <string.h>
#include <ctype.h>

void main(){
	
	char msg[100];
	int num;
	
	printf("Insira a mensagem para decodificar: ");
	gets(msg);
	num = strlen(msg);
	
	printf("Mensagem decodificada: \n");
	for(int i = 0; i < num; i++){
		if(msg[i] != 'p'){
			printf("%c", msg[i]);
		}else if(msg[i - 1] == 'p' && msg[i + 1] == 'p'){
			printf("%c", msg[i]);
		}
	}
}
