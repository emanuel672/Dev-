#include <stdio.h>
int main(){
	const int tamvet=50, tamlista=10;
	int vet[tamvet],posicao,posvet,achou,numero;
	printf("\n digite os dados do vetor\n");
	for(posicao=1;posicao<=tamlista;posicao++){
		scanf("%d",&numero);
//verifica se o numero esta no vetor
		posvet=0;
		achou=0;
		while(posvet<=tamvet-1&&achou==0){
			if(numero==vet[posvet])
				achou=1;
			else posvet++;
		}
	}
	if(achou==1)
		printf("achou na posicao: %d\n",posvet);
	else
		printf("nao achou o numero\n");
}
