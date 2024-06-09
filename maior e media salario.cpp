#include <stdio.h>
#include <stdlib.h>
int main(){
	int cont;
	float salario,media,soma,maior;
	maior=0; soma=0;
	for(cont=1;cont<=10;cont++){
		printf("digite o salario do funcionario\n");
		scanf("%f",&salario);
		if(salario>maior){
			maior=salario;
		}
	}
	media=soma/10;
	printf("o maior salario da empressa e =%.2f\n",maior);
	printf("a media salarial  da empresa e = %.2f",media);
	return 0;
}
