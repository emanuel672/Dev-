#include <stdio.h>
int main(void){
	float nota;
	printf("digite a nota \n");
	scanf("%f",&nota);
	printf("%f\n",nota);
	if(nota >= 0 && nota <= 10){
		if(nota>=5){
			printf("vc passou \n");
		}else
			printf("vc reprovo \n");
	}else
		printf("erro: media invalida");
}
