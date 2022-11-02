#include <stdio.h>
#include <string.h>
typedef struct{
	char nome[40];
	char genero[40];
	int integrantes;
	int ranking;
}tbanda;
int qtd=0; // controlar a posicao de cadastro no vetor
//--------------
void addBanda(tbanda b[]){
	printf("Nome da banda:");
	fflush(stdin);// limpa o buffer do teclado
	gets(b[qtd].nome);
	
	printf("Genero da banda:");
	fflush(stdin);// limpa o buffer do teclado
	gets(b[qtd].genero);
	
	printf("Qtde de integrantes:");
	scanf("%d",&b[qtd].integrantes);
	printf("Ranking da banda:");
	scanf("%d",&b[qtd].ranking);
	
	qtd++;
}
//--------------
void listaBandas(tbanda b[])
	{
		int i;
		for(i=0;i<qtd;i++){
			printf("** Banda %d **\n",i+1);
			printf("Nome:%s\n",b[i].nome);
			printf("Genero:%s\n",b[i].genero);
			printf("Integrantes:%d\n",b[i].integrantes);
			printf("Ranking:%d\n",b[i].ranking);
			printf("------------------------\n");
	}// fim for
}
//-----------------------------
void listaRanking(tbanda b[], int busca){
	int i;
	for(i=0;i<qtd;i++){
		if(busca==b[i].ranking){
			printf("** Banda %d **\n",i+1);
			printf("Nome:%s\n",b[i].nome);
			printf("Genero:%s\n",b[i].genero);
			printf("Integrantes:%d\n",b[i].integrantes);
			printf("Ranking:%d\n",b[i].ranking);
			printf("------------------------\n");
		}// fim if
	}// fim for
}
//--------------------------
void listaGenero(tbanda b[], char generoBusca[40]){
	int i;
	char generoAux[40];
	for(i=0;i<qtd;i++){
		strcpy(generoAux,b[i].genero); // copiando do vetor para aux
		strupr(generoAux);// uppercase
		if(strcmp(generoBusca,generoAux)==0){
			printf("** Banda %d **\n",i+1);
			printf("Nome:%s\n",b[i].nome);
			printf("Genero:%s\n",b[i].genero);
			printf("Integrantes:%d\n",b[i].integrantes);
			printf("Ranking:%d\n",b[i].ranking);
			printf("------------------------\n");
		}// fim if
	}// fim for
}
//--------------------------
int listaNome(tbanda b[], char nomeBusca[40]){
	int i;
	char nomeAux[40];
	for(i=0;i<qtd;i++){
		strcpy(nomeAux,b[i].nome); // copiando do vetor para aux
		strupr(nomeAux);// uppercase
		if(strcmp(nomeBusca,nomeAux)==0){
			printf("** Banda %d **\n",i+1);
			printf("Nome:%s\n",b[i].nome);
			printf("Genero:%s\n",b[i].genero);
			printf("Integrantes:%d\n",b[i].integrantes);
			printf("Ranking:%d\n",b[i].ranking);
			printf("------------------------\n");
				return i ;//retornando o indice
		}// fim if
	
	}// fim for
	return -1;//n�o encontrou
}
//--------------------------
void removeBanda(tbanda b[], char nomeBanda[40]){
	int posicao,resp;
	posicao = listaNome(b,nomeBanda);
	if (posicao == 1){
		printf ("Banda nao encontrada");
		return;
	}//fim if
	printf ("Tem certeza que deseja remover a banda? [1-Sim | 2-Nao]");
	scanf ("%d", &resp);
	if (resp==1){
	b[posicao] = b[qtd-1]; // sobrepondo a ultima banda
	qtd--;
}// fim if
else 
printf ("Operacao cancelada");
}
//--------------------------
void alteraBanda(tbanda b[], int qtd){
	
	printf("Nome da banda: ");
	fflush(stdin);
	gets(b[qtd].nome);
	
	printf("Genero da banda: ");
	fflush(stdin);
	gets(b[qtd].genero);
	
	printf("Qtde de integrantes: ");
	fflush(stdin);
	scanf("%d", &b[qtd].integrantes);
	
	printf("Ranking da banda: ");
	fflush(stdin);
	scanf("%d", &b[qtd].ranking);
	
}
//--------------------------
void salvaArquivo(tbanda bandas[]){
	FILE *arq;
	int i=0;
	arq=fopen("dadosBandas.txt","wb");
	fwrite(&bandas[i],sizeof(tbanda),qtd,arq);
	printf("Dados salvos com sucesso\n");
	fclose(arq);
}
//-----------------------------
void carregaArquivo(tbanda bandas[]){
	FILE *arq;
	arq=fopen("dadosBandas.txt","rb");
	if(arq==NULL){
	  printf("Arquivo nao encontrado :(\n");
	  return;
	  }// fim if
	 while(fread(&bandas[qtd],sizeof(tbanda),1,arq) >0 )
	      qtd++;  
	 printf("Dados carregados com sucesso !\n");
	fclose(arq);
}
int menu(){
	int opcao;
	printf("*** Sistema de Cadastro Rock4You ***\n");
	printf("1- Cadastrar\n");
	printf("2- Listar\n");
	printf("3- Filtro por ranking\n");
	printf("4- Filtro por genero\n");
	printf("5- Filtro por nome\n");
	printf("6- Excluir banda\n");
	printf("7- Alterar banda\n");
	printf("0 - Sair\n");
	scanf("%d",&opcao);
	return opcao;
}// fim menu
//------------------
int main(){
	tbanda bandas[100];
	int opcao, busca;
	char generoBusca[40], nomeBusca[40];
	carregaArquivo(bandas);
	do{
		opcao= menu();
		switch(opcao){
			case 1: addBanda(bandas);
			 break;
			case 2: listaBandas(bandas);
			 break;
			case 3: printf("Filtrar pelo ranking:");
					scanf("%d",&busca);
					listaRanking(bandas,busca);
			 break;
			case 4: printf("Filtro por genero:");
					fflush(stdin);//limpa buffer
					gets(generoBusca);
					strupr(generoBusca);// uppercase
					listaGenero(bandas,generoBusca);
			 break;	
			case 5: printf("Filtro por nome:");
					fflush(stdin);//limpa buffer
					gets(nomeBusca);
					strupr(nomeBusca);// uppercase
						if(listaNome(bandas, nomeBusca)==-1)
						printf ("Banda nao encontrada!\n");
						
			 break;	
			case 6: printf("Nome da banda:");
					fflush(stdin);//limpa buffer
					gets(nomeBusca);
					strupr(nomeBusca);// uppercase
					removeBanda(bandas, nomeBusca);
					printf ("Banda excluida com sucesso!");
			 break;	
			case 7: printf("Codigo da banda para alteracao:");
					scanf("%d", &busca);
					alteraBanda(bandas, (busca - 1));
			 break;
			case 0: printf("Saindo...\n");
					salvaArquivo(bandas);
			 break;
			default: printf("Opcao invalida!!!\n");  
		}// fim switch
	  getch(); // pausa
	  system("cls"); // limpa tela	
	}while(opcao!=0);
	return 0;
	
}// fim main

