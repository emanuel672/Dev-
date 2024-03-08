#include <stdio.h>
#include <stdlib.h>
int main(){
	int num;
	printf("digite um numero");
	scanf("%d",&num);
	while(num!=0){
		printf("o numero lido foi= %d\n",num);
		printf("digite um numero ");
		scanf("%d",&num);
	}
}
