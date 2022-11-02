#include <stdio.h>
#include <string.h>

typedef struct
{
	char nome[50];
	float potencia;
	float tempo;	
}teletros;

int qtd = 0;
//--------------------------------------------

void salvaArquivo(teletros el[])
{
	FILE *arq;
	int i = 0;
	arq = fopen("dadosEletro.txt", "wb");
	fwrite(&el[i], sizeof(teletros), qtd, arq);
	printf("Dados salvos com sucesso.\n");
	fclose(arq);

}
//--------------------------------------------

void carregaArquivo(teletros el[])
{
	FILE *arq;
	arq = fopen("dadosEletro.txt", "rb");
	if(arq == NULL){
		printf("Arquivo de alunos nao encontrado!\n");
		return;
	}
	while(fread(&el[qtd], sizeof(teletros), 1, arq) > 0)
		qtd++;
	printf("Dados carregado com sucesso!\n");
	fclose(arq);
}
//--------------------------------------------

void addEletro(teletros el[])
{
	printf("Nome do eletrodomestico: ");
	fflush(stdin);
	gets(el[qtd].nome);
	
	printf("Potencia do eletro(em kW): ");
	fflush(stdin);
	scanf("%f", &el[qtd].potencia);

	printf("Tempo de uso diario(em horas): ");
	fflush(stdin);
	scanf("%f", &el[qtd].tempo);
	
	qtd++;
}
//--------------------------------------------

void listaEletros(teletros el[])
{
	
	for(int i = 0; i < qtd; i++)
	{
		printf("*** Eletro %d ***\n", i + 1);
		printf("Nome: %s\n", el[i].nome);
		printf("Potencia(kW): %.2f\n", el[i].potencia);
		printf("Uso diario(horas): %.2f\n", el[i].tempo);
		printf("------------------------\n");
	}
	
}
//--------------------------------------------

int filtraNome(teletros el[], char nomeConsulta[50])
{
	char nomeAux[50];
	int res = -1;
	
	for(int i = 0; i < qtd; i++)
	{
		strcpy(nomeAux, el[i].nome); // copiando do vetor para aux
		strupr(nomeAux); // uppercase
		if(strcmp(nomeConsulta, nomeAux) == 0)
		{
			printf("*** Eletro %d ***\n", i + 1);
			printf("Nome: %s\n", el[i].nome);
			printf("Potencia(kW): %.2f\n", el[i].potencia);
			printf("Uso diario(horas): %.2f\n", el[i].tempo);
			printf("------------------------\n");
			res = 0;
		}
	}
	
	return res;	
}
//--------------------------------------------

int filtraCons(teletros el[], float gasto)
{
	int res = 1;
	float custo;
	
	for(int i = 0; i < qtd; i++)
	{
		custo = el[i].potencia * el[i].tempo;
		if(gasto <= custo)
		{
			printf("*** Eletro %d ***\n", i + 1);
			printf("Nome: %s\n", el[i].nome);
			printf("Potencia(kW): %.2f\n", el[i].potencia);
			printf("Uso diario(horas): %.2f\n", el[i].tempo);
			printf("------------------------\n");
			res = 0;
		}
	}
	
	return res;
}
//--------------------------------------------

void consumoTotal(teletros el[])
{
	float preco = 0.0;
	float consumo = 0.0;
	
	for(int i = 0; i < qtd; i++)
	{
		preco += el[i].potencia * el[i].tempo;
		consumo += el[i].potencia;
	}
	
	printf("Consumo diario: %.2fkW\n", consumo);
	printf("Consumo mensal: %.2fkW\n", consumo * 30.0);
	printf("\n");
	printf("Custo diario: R$%.2f\n", preco);
	printf("Custo mensal: R$%.2f\n", preco * 30.0);
	
}
//--------------------------------------------

int menu()
{
	int opcao;
	
	printf("*** Sistema de energia ***\n");
	printf("1 - Cadastrar eletrodomestico\n");
	printf("2 - Listar eletrodomesticos\n");
	printf("3 - Procurar por nome\n");
	printf("4 - Procurar por gasto\n");
	printf("5 - Calcular gasto diario e mensal\n");
	printf("6 - Salvar dados\n");
	printf("7 - Carregar dados\n");
	printf("0 - Sair\n");
	printf("Opcao: ");
	scanf("%d", &opcao);
	printf("\n");
	return opcao;
}
//--------------------------------------------

int main()
{
	teletros eletros[100];
	char nomeBusca[50];
	float custo;
	int op, res;
	
	do
	{
		op = menu();
		switch(op)
		{
			case 1:
				addEletro(eletros);
				break;
			case 2:
				listaEletros(eletros);
				break;
			case 3:
				printf("Insira o nome do eletro: ");
				fflush(stdin);
				gets(nomeBusca);
				strupr(nomeBusca);
				res = filtraNome(eletros, nomeBusca);
				if(res == -1)
				{
					printf("\nEletro nao encontrado!");
				}
				break;
			case 4:
				printf("Insira o gasto(em R$): ");
				scanf("%f", &custo);
				filtraCons(eletros, custo);
				break;
			case 5:
				consumoTotal(eletros);
				break;
			case 6:
				salvaArquivo(eletros);
				break;
			case 7:
				carregaArquivo(eletros);
				break;
			case 0:
				printf("Saindo...\n");
				break;
			default:
				printf("Opcao invalida!!!\n");
				break;
		}
		getch();
		system("cls");
	}while(op != 0);
	
}
