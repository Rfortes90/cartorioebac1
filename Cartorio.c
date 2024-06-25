#include <stdio.h> //Bbiblioteca de comunicação com o usuário
#include <stdlib.h> //biblioteca de alocação de espaço em memória
#include <locale.h> //biblioteca de alocação de texto da região
#include <string.h> // biblioteca responsável por cuidar do string

int registro() // função responsavel por cadastrar os usuarios no sistema
{
	// inicio de criação de variaveis/string
	char arquivo[40];
	char cpf[40];
	char nome[40];
	char sobrenome[40];
	char cargo[40];
	// final de criação de variaveis/string
	
	printf("Digite o CPF a ser cadastrado: "); // coletando informação do usuario
	scanf("%s", cpf); //%s se refere a string
	
	strcpy(arquivo, cpf); // Responsavel por copiar os valores de string
	
	FILE *file; // cria o arquivo
	file = fopen(arquivo, "w"); // cria o arquivo e o "W" significa escrever
	fprintf(file,cpf);
	fclose(file);
	
	file = fopen(arquivo, "a");
	fprintf(file,",");
	fclose(file);
	
	printf("Digite o nome a ser cadastrado: "); 
	scanf("%s",nome);
	
	file = fopen(arquivo, "a");
	fprintf(file,nome);
	fclose(file);
	
	file = fopen(arquivo, "a");
	fprintf(file,",");
	fclose(file);
	
	printf("Digite o sobrenome a ser cadastrado: ");
	scanf("%s",sobrenome);
	
	file = fopen(arquivo, "a");
	fprintf(file,sobrenome);
	fclose(file);
	
	file = fopen(arquivo, "a");
	fprintf(file,",");
	fclose(file);
	
	printf("Digite o cargo a ser cadastrado: ");
	scanf("%s",cargo);
	
	file = fopen(arquivo, "a");
	fprintf(file,cargo);
	fclose(file);
	
	
	system("pause");	

}

int consulta()
{
	setlocale(LC_ALL, "Portuguese");
	
	char cpf[40];
	char conteudo[200];
	
	printf("Digite o CPF a ser consultado: ");
	scanf("%s",cpf);
	
	FILE *file;
	file = fopen(cpf,"r");
	
	if(file == NULL)
	{
	printf("Não foi possivel abrir o arquivo, não localizado!.\n");
	}
	
	while(fgets(conteudo, 200, file) != NULL)	
	{
		printf("\nEssas são as informações do usuário: ");
		printf("%s", conteudo);
		printf("\n\n");
	}
	
	system("pause");
	
}

int deletar()
{
	char cpf[40];
	
	printf("Digite o CPF do usuário a ser deletado: ");
	scanf("%s",cpf);
	
	remove(cpf);
	
	FILE *file;
	file = fopen(cpf,"r");
	
	if(file == NULL)
	{
		printf("O usuário não se encontra no sistema!. \n");
		system("pause");
		
	}
}

int main()
	{
	int opcao=0; //definindo variáveis
	int laco=1;
	char senhadigitada[10]="a";
	int comparacao;
	
			printf("### Cartorio da EBAC ###\n\n");
			printf("Login de administrador!\n\nDigite a sua senha: ");
			scanf("%s",senhadigitada);
			
			comparacao = strcmp(senhadigitada, "admin");
			
			if(comparacao == 0)
			{
				system("cls");
			
				for(laco=1;laco=1;)
		{
	
			setlocale(LC_ALL, "Portuguese");
	
			printf("### Cartório da EBAC ###\n\n"); //inicio de menu
			printf("Escolha a opção desejada do menu:\n\n");
			printf("\t1 - Registrar nomes\n");
			printf("\t2 - Consultor nomes\n");
			printf("\t3 - Deletar nomes\n\n");
			printf("Opção: "); 
			printf("\t4 - Sair do sistema\n\n");
	
	
			scanf("%d", &opcao); //armazenando a escolha do usuário
	
			system("cls"); // responsavel por limpar a tela
			
		
			switch(opcao) //inicio da seleção menu
			{
				case 1:
				registro(); //chamada de funções
				break;
			
				case 2:
				consulta();
				break;
			
				case 3:
				deletar();
				break;
			
				case 4:
				printf("Obrigado por utilizar o sistema!\n");
				return 0;
				break;
			
			
				default:
				printf("Essa opção não está disponível!\n");
				system("pause");
				break;
			}	//fim da seleção
		}
				
	}
	
	else
			printf("Senha incorreta!");
		}

		
		


	




