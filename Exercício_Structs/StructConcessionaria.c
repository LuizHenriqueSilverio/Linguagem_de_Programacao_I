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

int menu(){
	int opcao;
	
	printf("*** Sistema de Concessionaria Simas ***\n");
	printf("1 - Cadastrar veiculo\n");
	printf("2 - Listar veiculos\n");
	printf("3 - Filtrar por preco\n");
	printf("4 - FIltrar por marca\n");
	printf("0 - Sair\n");
	printf("Opcao: ");
	scanf("%d", &opcao);
	printf("\n");
	return opcao;
}

//--------------------------------------------

void main(){
	
	tveiculo veiculos[100];
	int op, busca, res;
	float precoMin, precoMax;
	char marcaBusca[40], modeloBusca[40];
	
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
			case 0:
				printf("Saindo...\n");
				break;
			default:
				printf("Opcao invalida!!!\n");
		}
		getch();
		system("cls");
	}while(op != 0);
	
}
