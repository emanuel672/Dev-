#include <stdio.h>
#include <stdlib.h>
int main(){
	float reaj,salario,salarioreaj,maiorsal;
	int cont;
	maiorsal=0;
	printf("percentual de reajuste salarial\n");
	scanf("%f",&reaj);
		for(cont=1;cont<=8;cont++){
			printf("informe o salario do funcionario\n");
			scanf("%f",&salario);
			salarioreaj=salario+(salario*reaj/100);
			printf("\no salario reajustado e %.2f\n",salarioreaj);
			if(salarioreaj>maiorsal)
				maiorsal=salarioreaj;
		}
		printf("\no maior salario reajustado e %.2f\n",maiorsal);
		return 0;
}
