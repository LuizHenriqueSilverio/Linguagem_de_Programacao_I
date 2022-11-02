#include <stdio.h>
#include <string.h>

typedef struct
{
	char nome[100];
	int matricula, prova1, prova2, prova3, media;
}talunos;

int qtd = 0;
//--------------------------------------------

void salvaArquivo(talunos al[])
{
	FILE *arq;
	int i = 0;
	arq = fopen("dadosAlunos.txt", "wb");
	fwrite(&al[i], sizeof(talunos), qtd, arq);
	printf("Dados salvos com sucesso.\n");
	fclose(arq);
}
//--------------------------------------------

void carregaArquivo(talunos al[])
{
	FILE *arq;
	arq = fopen("dadosAlunos.txt", "rb");
	if(arq == NULL){
		printf("Arquivo de alunos nao encontrado!\n");
		return;
	}
	while(fread(&al[qtd], sizeof(talunos), 1, arq) > 0)
		qtd++;
	printf("Dados carregado com sucesso!\n");
	fclose(arq);
}

//--------------------------------------------

void addAluno(talunos al[])
{
	printf("Nome do aluno: ");
	fflush(stdin);
	gets(al[qtd].nome);
	
	printf("Matricula do aluno: ");
	fflush(stdin);
	scanf("%d", &al[qtd].matricula);

	printf("Nota da primeira prova: ");
	fflush(stdin);
	scanf("%d", &al[qtd].prova1);
	
	printf("Nota da segunda prova: ");
	fflush(stdin);
	scanf("%d", &al[qtd].prova2);
	
	printf("Nota da primeira prova: ");
	fflush(stdin);
	scanf("%d", &al[qtd].prova3);
	
	al[qtd].media = (al[qtd].prova1 + al[qtd].prova2 + al[qtd].prova3) / 3;
	
	qtd++;
}
//--------------------------------------------

int filtraNome(talunos al[], char nomeConsulta[100])
{
	char nomeAux[100];
	int res = -1;
	
	for(int i = 0; i < qtd; i++)
	{
		strcpy(nomeAux, al[i].nome); // copiando do vetor para aux
		strupr(nomeAux); // uppercase
		if(strcmp(nomeConsulta, nomeAux) == 0)
		{
			printf("*** %s ***\n", al[i].nome);
			printf("Matricula: %d\n", al[i].matricula);
			printf("Nota de prova 1: %d\n", al[i].prova1);
			printf("Nota de prova 2: %d\n", al[i].prova2);
			printf("Nota de prova 3: %d\n", al[i].prova3);	
			printf("Media geral: %d\n", al[i].media);								
			printf("------------------------\n");
			res = 0;
		}
	}
	
	return res;	
}
//--------------------------------------------

int filtraMatricula(talunos al[], int matConsulta)
{
	int res = -1;
	
	for(int i = 0; i < qtd; i++)
	{
		if(matConsulta == al[i].matricula)
		{
			printf("*** %s ***\n", al[i].nome);
			printf("Matricula: %d\n", al[i].matricula);
			printf("Nota de prova 1: %d\n", al[i].prova1);
			printf("Nota de prova 2: %d\n", al[i].prova2);
			printf("Nota de prova 3: %d\n", al[i].prova3);
			printf("Media geral: %d\n", al[i].media);			
			printf("------------------------\n");
			res = 0;
		}
	}
	
	return res;	
}
//--------------------------------------------

void resAprovacao(talunos al[])
{
	for(int i = 0; i < qtd; i++)
	{
		if(al[i].media >= 6)
		{
			printf("O aluno %s esta aprovado.\n", al[i].nome);
		}else{
			printf("O aluno %s esta reprovado.\n", al[i].nome);
		}
	}
}
//--------------------------------------------

void maiorMedia(talunos al[])
{
	int maior = al[0].media;
	int res = 0;
	
	for(int i = 0; i < qtd; i++)
	{
		if(al[i].media > maior)
		{
			res = i;
		}
	}
	
	printf("*** %s ***\n", al[res].nome);
	printf("Matricula: %d\n", al[res].matricula);
	printf("Nota de prova 1: %d\n", al[res].prova1);
	printf("Nota de prova 2: %d\n", al[res].prova2);
	printf("Nota de prova 3: %d\n", al[res].prova3);
	printf("Media geral: %d\n", al[res].media);			
	printf("------------------------\n");
}
//--------------------------------------------

int menu()
{
	int opcao;
	
	printf("*** Sistema do curso ***\n");
	printf("1 - Cadastrar aluno\n");
	printf("2 - Procurar aluno por nome\n");
	printf("3 - Procurar aluno por matricula\n");
	printf("4 - Encontrar aluno com maior media\n");
	printf("5 - Listar aprovados e reprovados\n");
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
	talunos alunos[100];
	char nomeBusca[100];
	int op, res, matBusca[11];;
	
	do
	{
		op = menu();
		switch(op)
		{
			case 1:
				addAluno(alunos);
				break;
			case 2:
				printf("Insira o nome do aluno: ");
				fflush(stdin);
				gets(nomeBusca);
				strupr(nomeBusca);
				res = filtraNome(alunos, nomeBusca);
				if(res == -1)
				{
					printf("\nAluno nao encontrado!");
				}
				break;
			case 3:
				printf("Insira a matricula do aluno: ");
				fflush(stdin);
				scanf("%d", &matBusca);
				res = filtraMatricula(alunos, matBusca);
				if(res == -1)
				{
					printf("\nAluno nao encontrado!");
				}
				break;
			case 4:
				maiorMedia(alunos);
				break;
			case 5:
				resAprovacao(alunos);
				break;
			case 6:
				salvaArquivo(alunos);
				break;
			case 7:
				carregaArquivo(alunos);
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
