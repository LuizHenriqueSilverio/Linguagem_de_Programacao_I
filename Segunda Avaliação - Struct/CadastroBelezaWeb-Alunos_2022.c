#include <stdio.h>
#include <string.h>

typedef struct{
	int dia,mes,ano;
}tData;

typedef struct{
	char nome[40];
	tData data;
	int tamanho;
	int lancamento;
	int qtdEstoque;
	float preco;
}tBeleza;

int qtd = 0;

//----------------------------

void cadastra(tBeleza b[])
{
    printf("Cadastro de produtos\n");
    
    printf("Nome:");
    fflush(stdin); 
	gets(b[qtd].nome);
	
    printf("Data DD MM AA:");
    scanf("%d%d%d",&b[qtd].data.dia,
	               &b[qtd].data.mes,
				   &b[qtd].data.ano);
				   
	printf("Tamanho: ");
	scanf("%d", &b[qtd].tamanho);
	
	printf("Lancamento: (1-Sim | 2-Nao) ");
	scanf("%d", &b[qtd].lancamento);
	
	printf("Qtde. no estoque: ");
	scanf("%d", &b[qtd].qtdEstoque);
	
	printf("Preco: ");
	scanf("%f", &b[qtd].preco);
	
	printf("\n\nDados cadastrados com sucesso!");
	
	qtd++;
}

//-----------------------------

void listaProd(tBeleza b[]){
	
	int i;
	
	for(i = 0; i < qtd; i++)
	{
		printf("\nProduto %d: \n", i + 1);
		printf("Nome: %s\n", b[i].nome);
		printf("Tamanho: %d\n", b[i].tamanho);
		printf("Data de Lancamento: %d/%d/%d\n", b[i].data.dia, b[i].data.mes, b[i].data.ano);
		printf("Lancamento?: %d\n", b[i].lancamento);
		printf("Qtde. no estoque: %d\n", b[i].qtdEstoque);
		printf("Preco: %.2f\n", b[i].preco);
		printf("-----------------------------------------\n");
	}
	
}

//-----------------------------

void listaProdLanc(tBeleza b[])
{
	
	int i;
	
	for(i = 0; i < qtd; i++)
	{
		if(b[i].lancamento == 1)
		{
			printf("\nProduto %d: \n", i + 1);
			printf("Nome: %s\n", b[i].nome);
			printf("Tamanho: %d\n", b[i].tamanho);
			printf("Data de Lancamento: %d/%d/%d\n", b[i].data.dia, b[i].data.mes, b[i].data.ano);
			printf("Lancamento?: %d\n", b[i].lancamento);
			printf("Qtde. no estoque: %d\n", b[i].qtdEstoque);
			printf("Preco: %.2f\n", b[i].preco);
			printf("-----------------------------------------\n");
		}
	}
	
}

//-----------------------------

void valorEstoque(tBeleza b[])
{
	int i;
	float total = 0.0;
	
	for(i = 0; i < qtd; i++)
	{
		total += b[i].preco * b[i].qtdEstoque;
	}
	
	printf("Valor total do estoque: R$%.2f\n", total);
}

//-----------------------------

void comparaPreco(tBeleza b[])
{
	int i, menor = 0, maior = 0;
	
	for(i = 0; i < qtd; i++)
	{
		if(b[i].preco > b[maior].preco)
		{
			maior = i;
		}
		if(b[i].preco < b[menor].preco)
		{
			menor = i;
		}
	}
	
	printf("\nPRODUTO MAIS CARO: \n");
	printf("\nProduto %d: \n", maior);
	printf("Nome: %s\n", b[maior].nome);
	printf("Tamanho: %d\n", b[maior].tamanho);
	printf("Data de Lancamento: %d/%d/%d\n", b[maior].data.dia, b[maior].data.mes, b[maior].data.ano);
	printf("Lancamento?: %d\n", b[maior].lancamento);
	printf("Qtde. no estoque: %d\n", b[maior].qtdEstoque);
	printf("Preco: %.2f\n", b[maior].preco);
	printf("-----------------------------------------\n");
		
	printf("PRODUTO MAIS BARATO: \n");
	printf("\nProduto %d: \n", menor);
	printf("Nome: %s\n", b[menor].nome);
	printf("Tamanho: %d\n", b[menor].tamanho);
	printf("Data de Lancamento: %d/%d/%d\n", b[menor].data.dia, b[menor].data.mes, b[menor].data.ano);
	printf("Lancamento?: %d\n", b[menor].lancamento);
	printf("Qtde. no estoque: %d\n", b[menor].qtdEstoque);
	printf("Preco: %.2f\n", b[menor].preco);
	printf("-----------------------------------------\n");
	
}

//-----------------------------

void buscaMes(tBeleza b[], tData d)
{
	int i;
	
	for(i = 0; i < qtd; i++)
	{
		if(d.mes == b[i].data.mes && d.ano == b[i].data.ano)
		{
			printf("\nProduto %d: \n", i + 1);
			printf("Nome: %s\n", b[i].nome);
			printf("Tamanho: %d\n", b[i].tamanho);
			printf("Data de Lancamento: %d/%d/%d\n", b[i].data.dia, b[i].data.mes, b[i].data.ano);
			printf("Lancamento?: %d\n", b[i].lancamento);
			printf("Qtde. no estoque: %d\n", b[i].qtdEstoque);
			printf("Preco: %.2f\n", b[i].preco);
			printf("-----------------------------------------\n");
		}
	}
}// fim funcao

//-----------------------------

void alteraEstoque(tBeleza b[], char nomeBusca[40])
{
	char nomeAux[40];
	int i, qtdAdc;
	
	for(i = 0; i < qtd; i++){
		strcpy(nomeAux, b[i].nome);
		strupr(nomeAux);
		if(strcmp(nomeAux, nomeBusca) == 0)
		{
			printf("Quantidade adicionada: ");
			scanf("%d", &qtdAdc);
			b[i].qtdEstoque += qtdAdc;
			printf("\nEstoque adicionado com sucesso!\n");
		}
	}
}

//-----------------------------
void salvaArquivoBinario(tBeleza b[]){
	FILE *arq;
	int i;
	arq=fopen("beleza.dat","wb");
	fwrite(&b[0],sizeof(tBeleza),qtd,arq);
	printf("Dados salvos com sucesso\n");
	fclose(arq);
}
//-----------------------------
void carregaBinario(tBeleza b[]){
	FILE *arq;
	arq=fopen("beleza.dat","rb");
	if(arq==NULL)
	  printf("Arquivo nao encontrado!\n");
	else{
	 while(    fread(&b[qtd],sizeof(tBeleza),1,arq) >0     )
	     qtd++;  
	 printf("Dados carregados com sucesso!\n");
	}
	fclose(arq);
}
//----------------------------
int menu(){
	int op;
	printf("\t\t**** Beleza na Web ****\n");
	printf("1 - Cadastrar novo produto\n");
	printf("2 - Listar todos produtos\n");
	printf("3 - Salvar em arquivo\n");
	printf("4 - Carregar\n");
	printf("5 - Listar lancamentos\n");
	printf("6 - Calcular valor total do estoque\n");
	printf("7 - Mostrar o prdouto mais caro e mais barato\n");
	printf("8 - Listar os produtos por mes\n");
	printf("9 - Inserir produtos no estoque\n");
	printf("0 - Sair\n");
	printf("Digite sua opcao:"); 
	scanf("%d",&op);
	return op;
}
//-----------------------------
int main(){
	tBeleza produtos[100];
	int op;
	tData dataBusca;
	char nomeBusca[40];
	
	do
	{
		op = menu();
		switch(op)
		{
			case 1: 
			   	cadastra(produtos);
			   	break;
			case 2: 
				listaProd(produtos);
			    break;
			case 3: 
			   	salvaArquivoBinario(produtos);
			    break; 
			case 4: 
			   	carregaBinario(produtos);
			   	break;
			case 5:
				listaProdLanc(produtos);
				break;
			case 6:
				valorEstoque(produtos);
				break;
			case 7:
				comparaPreco(produtos);
				break;
			case 8:
				printf("Data para busca: (MM  AA): ");
				scanf("%d%d", &dataBusca.mes, &dataBusca.ano);
				buscaMes(produtos, dataBusca);
				break;
			case 9:
				printf("Insira o nome do produto para pesquisa: ");
				fflush(stdin);
				gets(nomeBusca);
				strupr(nomeBusca);
				alteraEstoque(produtos, nomeBusca);
				break;
			case 0: 
			   	printf("Saindo ... \n");
			    break;
			default:
			   	printf("Opcao invalida\n"); 	 	
			   	break;
		}// fim switch
		getch(); // pausa
		system("cls"); // limpa a tela
	}while(op!=0);
}// fim main

