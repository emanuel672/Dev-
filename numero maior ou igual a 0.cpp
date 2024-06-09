#include <stdio.h>
int main(){
	int opcao;
	
	printf("\nentre com uma numero ineteiro:\n");
	scanf("%d",&opcao);
	
	if(opcao>=0){
		if(opcao==0){
			printf("\nnumero nulo.\n");
		}else{
			printf("\nnumero positivo\n");
		}
	}else{
		printf("\nnumero negativo\n");
	}
}
