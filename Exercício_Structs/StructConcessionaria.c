#include <stdio.h>
#include <string.h>

typedef struct{
	char modelo[40];
	char marca[40];
	int ano;
	float preco;
}tveiculo;

int qtd = 0;

void addVeiculo(tveiculo v[]){
	printf("Nome do modelo: ");
	fflush(stdin);
	gets(v[qtd].modelo);
	
	printf("Nome da marca: ");
	fflush(stdin);
	gets(v[qtd].marca);
	
	printf("Ano de fabricacao: ");
	fflush(stdin);
	scanf("%d", &v[qtd].ano);
	
	printf("Valor de venda: ");
	fflush(stdin);
	scanf("%f", &v[qtd].preco);
	
	qtd++;
}

//--------------------------------------------

void listaVeiculos(tveiculo v[]){
	
	for(int i = 0; i < qtd; i++){
		printf("*** Veiculo %d ***\n", i + 1);
		printf("Modelo: %s\n", v[i].modelo);
		printf("Marca: %s\n", v[i].marca);
		printf("Ano de fabricacao: %d\n", v[i].ano);
		printf("Preco de venda: %.2f\n", v[i].preco);
		printf("------------------------\n");
	}
	
}

//--------------------------------------------

int filtraPreco(tveiculo v[], float precoMin, float precoMax){

	int res = -1;

	for(int i = 0; i < qtd; i++){
		if(v[i].preco >= precoMin && v[i].preco <= precoMax){
			printf("*** Veiculo %d ***\n", i + 1);
			printf("Modelo: %s\n", v[i].modelo);
			printf("Marca: %s\n", v[i].marca);
			printf("Ano de fabricacao: %d\n", v[i].ano);
			printf("Preco de venda: %.2f\n", v[i].preco);
			printf("------------------------\n");
			res = 0;
		}
	}
	
	return res;
	
}

//--------------------------------------------

int filtraMarca(tveiculo v[], char marcaConsulta[40]){
	char marcaAux[40];
	int res = -1;
	
	for(int i = 0; i < qtd; i++){
		strcpy(marcaAux, v[i].marca); // copiando do vetor para aux
		strupr(marcaAux); // uppercase
		if(strcmp(marcaConsulta, marcaAux) == 0){
			printf("*** Veiculo %d ***\n", i + 1);
			printf("Modelo: %s\n", v[i].modelo);
			printf("Marca: %s\n", v[i].marca);
			printf("Ano de fabricacao: %d\n", v[i].ano);
			printf("Preco de venda: %.2f\n", v[i].preco);
			printf("------------------------\n");
			res = 0;
		}
	}
	
	return res;
	
}

//--------------------------------------------

int selecionaVeiculo(tveiculo v[], int n){
	if(n > qtd + 1){
		printf("Não existe veiculo nesse indice!");
		return -1;
	}else{
		printf("*** Veiculo %d ***\n", n + 1);
		printf("Modelo: %s\n", v[n].modelo);
		printf("Marca: %s\n", v[n].marca);
		printf("Ano de fabricacao: %d\n", v[n].ano);
		printf("Preco de venda: %.2f\n", v[n].preco);
		printf("------------------------\n");
		return n;
	}
}

//--------------------------------------------

void alteraVeiculo(tveiculo v[], int n){
	
	printf("Nome do modelo: ");
	fflush(stdin);
	gets(v[n].modelo);
	
	printf("Nome da marca: ");
	fflush(stdin);
	gets(v[n].marca);
	
	printf("Ano de fabricacao: ");
	fflush(stdin);
	scanf("%d", &v[n].ano);
	
	printf("Valor de venda: ");
	fflush(stdin);
	scanf("%f", &v[n].preco);
	
}

//--------------------------------------------

void removeVeiculo(tveiculo v[], int n){
	int pos, op;
	
	pos = selecionaVeiculo(v, n);
	if(pos == -1){
		printf("\nVeiculo nao encontrado!\n");
	}
	printf("\nTem certeza que deseja remover o veiculo? [1-Sim | 2-Nao]\n Opcao: ");
	scanf("%d", &op);
	if(op == 1){
		v[pos] = v[qtd - 1];
		qtd--;
		printf("Veiculo removido com sucesso!");
	}else{
		printf("Operacao cancelada!");
	}
}

//--------------------------------------------

void salvaArquivo(tveiculo veiculos[]){
	FILE *arq;
	int i = 0;
	arq = fopen("dadosVeiculos.txt", "wb");
	fwrite(&veiculos[i], sizeof(tveiculo), qtd, arq);
	printf("Dados salvos com sucesso.\n");
	fclose(arq);
}

//--------------------------------------------

void carregaArquivo(tveiculo veiculos[]){
	FILE *arq;
	arq = fopen("dadosVeiculos.txt", "rb");
	if(arq == NULL){
		printf("Arquivo de veiculos nao encontrado!\n");
		return;
	}
	while(fread(&veiculos[qtd], sizeof(tveiculo), 1, arq) > 0)
		qtd++;
	printf("Dados carregado com sucesso!\n");
	fclose(arq);
}

//--------------------------------------------
int menu(){
	int opcao;
	
	printf("*** Sistema de Concessionaria Simas ***\n");
	printf("1 - Cadastrar veiculo\n");
	printf("2 - Listar veiculos\n");
	printf("3 - Filtrar por preco\n");
	printf("4 - Filtrar por marca\n");
	printf("5 - Alterar informacoes de um veiculo\n");
	printf("6 - Remover um veiculo\n");
	printf("0 - Sair\n");
	printf("Opcao: ");
	scanf("%d", &opcao);
	printf("\n");
	return opcao;
}

//--------------------------------------------

void main(){
	
	tveiculo veiculos[100];
	int op, res, busca;
	float precoMin, precoMax;
	char marcaBusca[40], modeloBusca[40];
	carregaArquivo(veiculos);
	
	do{
		op = menu();
		switch(op){
			case 1:
				addVeiculo(veiculos);
				break;
			case 2:
				listaVeiculos(veiculos);
				break;
			case 3:
				printf("Insira o preco minimo de filtro: ");
				scanf("%f", &precoMin);
				printf("Insira o preco maximo de filtro: ");
				scanf("%f", &precoMax);
				res = filtraPreco(veiculos, precoMin, precoMax);
				if(res == -1){
					printf("Nao ha veiculos nessa faixa de preco! \n");
				}
				break;
			case 4:
				printf("Insira o nome da marca: ");
				fflush(stdin);
				gets(marcaBusca);
				strupr(marcaBusca);
				res = filtraMarca(veiculos, marcaBusca);
				if(res == -1){
					printf("Nao ha veiculos dessa marca! \n");
				}
				break;
			case 5:
				listaVeiculos(veiculos);
				printf("Insira o codigo do veiculo para alteracao: ");
				scanf("%d", &busca);
				alteraVeiculo(veiculos, (busca - 1));
				break;
			case 6:
				printf("Codigo do veiculo: ");
				scanf("%d", &busca);
				removeVeiculo(veiculos, (busca - 1));
				break;
			case 0:
				printf("Saindo...\n");
				salvaArquivo(veiculos);
				break;
			default:
				printf("Opcao invalida!!!\n");
		}
		getch();
		system("cls");
	}while(op != 0);
	
}
