#include <stdio.h>
#include <stdlib.h>
int main(){
	int cont,n,num,somap,somai;
	somap=0;
	somai=0;
	printf("digite a quantidade de numeros da lista:\n");
	scanf("%d",&n);
	for(cont=1;cont<=n;cont++){
		printf("digite um numero\n");
		scanf("%d",&num);
		if(num %2==0){
			somap=somap+num;
		}else
			somai=somai+num;
	}
	printf("a soma dos numeros pares= %d\n",somap);
	printf("a soma dos numeros impares= %d\n",somai);
	return 0;
}
