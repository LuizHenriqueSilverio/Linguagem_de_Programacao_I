#include <stdio.h>
#include <string.h>

typedef struct
{
	int mes;
	int ano;
}tnasc;

typedef struct
{
	int cod;
	int leite;
	int alim;
	tnasc nasc;
	char abate;
}tgado;

int qtd = 0;

//--------------------------------------------

void salvaArquivo(tgado gd[])
{
	FILE *arq;
	int i = 0;
	arq = fopen("dadosGado.txt", "wb");
	fwrite(&gd[i], sizeof(tgado), qtd, arq);
	printf("Dados salvos com sucesso.\n");
	fclose(arq);

}
//--------------------------------------------

void carregaArquivo(tgado gd[])
{
	FILE *arq;
	arq = fopen("dadosGado.txt", "rb");
	if(arq == NULL){
		printf("Arquivo de alunos nao encontrado!\n");
		return;
	}
	while(fread(&gd[qtd], sizeof(tgado), 1, arq) > 0)
		qtd++;
	printf("Dados carregado com sucesso!\n");
	fclose(arq);
}
//--------------------------------------------

void addGado(tgado gd[], int mes, int ano){
	printf("Codigo da cabeca de gado: ");
	fflush(stdin);
	scanf("%d", &gd[qtd].cod);
	
	printf("Litros de leite p/ semana(em litros): ");
	fflush(stdin);
	scanf("%d", &gd[qtd].leite);
	
	printf("Alimentos ingeridos p/ semana(em quilos): ");
	fflush(stdin);
	scanf("%d", &gd[qtd].alim);
	
	printf("Mes de Nascimento: ");
	fflush(stdin);
	scanf("%d", &gd[qtd].nasc.mes);
	
	printf("Ano de Nascimento: ");
	fflush(stdin);
	scanf("%d", &gd[qtd].nasc.ano);
	
	if(gd[qtd].nasc.mes >= mes && gd[qtd].nasc.ano <= ano - 5)
	{
		gd[qtd].abate = 'S';
		
	}else if(gd[qtd].leite < 40){
		gd[qtd].abate = 'S';
	}else{
		gd[qtd].abate = 'N';
	}
	
	qtd++;
}

//--------------------------------------------
void listaGado(tgado gd[])
{
	
	for(int i = 0; i < qtd; i++)
	{
		printf("Codigo: %d\n", gd[i].cod);
		printf("Leite p/ semana: %d\n", gd[i].leite);
		printf("Alim. cons. p/ semana: %d\n", gd[i].alim);
		printf("Mes de nasc.: %d\n", gd[i].nasc.mes);
		printf("Ano de nasc.: %d\n", gd[i].nasc.ano);
		printf("------------------------\n");
	}
	
}
//--------------------------------------------

void calculaLeite(tgado gd[])
{
	int totalLeite = 0;
	
	for(int i = 0; i < qtd; i++)
	{
		totalLeite += gd[i].leite;
	}
	
	printf("Total de leite produzido na semana: %d", totalLeite);
	
}
//--------------------------------------------

void calculaAlim(tgado gd[])
{
	int totalAlim = 0;
	
	for(int i = 0; i < qtd; i++)
	{
		totalAlim += gd[i].alim;
	}
	
	printf("Total de alimento consumido na semana: %d", totalAlim);
	
}
//--------------------------------------------

void listaGadoAbate(tgado gd[])
{
	
	for(int i = 0; i < qtd; i++)
	{
		if(gd[i].abate == 'S')
		{	
		printf("Codigo: %d\n", gd[i].cod);
		printf("Leite p/ semana: %d\n", gd[i].leite);
		printf("Alim. cons. p/ semana: %d\n", gd[i].alim);
		printf("Mes de nasc.: %d\n", gd[i].nasc.mes);
		printf("Ano de nasc.: %d\n", gd[i].nasc.ano);
		printf("------------------------\n");
		}
	}
	
}
//--------------------------------------------

int menu()
{
	int opcao;
	
	printf("*** Controle de gado ***\n");
	printf("1 - Cadastrar cabeca de gado\n");
	printf("2 - Listar cabeca de gado\n");
	printf("3 - Calcular leite produzido\n");
	printf("4 - Calcular alimento consumido\n");
	printf("5 - Listar animais aptos para o abate\n");
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
	tgado gado[100];
	int op, mes, ano;
	
	do
	{
		op = menu();
		switch(op)
		{
			case 1:
				printf("Por favor, insira mes e ano de compra do gado: ");
				scanf("%d%d", &mes, &ano);
				printf("\n");
				addGado(gado, mes, ano);
				break;
			case 2:
				listaGado(gado);
				break;
			case 3:
				calculaLeite(gado);
				break;
			case 4:
				calculaAlim(gado);
				break;
			case 5:
				listaGadoAbate(gado);
				break;
			case 6:
				salvaArquivo(gado);
				break;
			case 7:
				carregaArquivo(gado);
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
