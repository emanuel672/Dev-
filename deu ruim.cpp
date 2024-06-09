#include <stdio.h>
int main(void){
	int cadastrado, ativo, logado;
	char opcao;
	
	printf("deseja cadastrar S/N \n");
	scanf("%c", &opcao);
	if(opcao =='s'){
		cadastrado =1;
		printf("\nconta cadastrada \n");
	}
	
	printf("deseja ativar S/N \n");
	scanf("%c", &opcao);
	
	if(opcao =='s'){
		ativo =1;
		printf("\nconta ativada \n");
	}
	
	printf("deseja logada S/N \n");
	scanf("%c", &opcao);
	
	if(opcao =='s'){
		logado =1;
		printf("conta logado \n");
	}
	
	if((cadastrado ==1)&&(ativo == 1)&&(logado == 1)){
		printf("seja bem vindo \n");
	}else{
		printf("aldo deu errado \n");
	}
}
