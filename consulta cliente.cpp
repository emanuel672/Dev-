#include <stdio.h>
int main(void){
	int opcao;
	printf("1-inserir cliente \n");
	printf("2-consultar cpf \n");
	printf("3-consultar nome \n");
	printf("4-remover base cliente \n");
	printf("digite a opcao \n");
	scanf("%d", &opcao);
	switch(opcao){
		case 1:
			printf("vamos inserir novo cliente\ndigite seu nome\ndigite cpf\n");
			break;
		case 2:
			printf("vamos inserir novo cliente\ndigite cpf\n");
			break;
		case 3:
			printf("vamos inserir novo cliente\ndigite seu nome\n");
			break;
		case 4:
			printf("vamos remover\ndigite cpr\n");
			break;
		default:
			printf("vamos sair do sistema\n");
			break;
	}
}
