#include <stdio.h>
#include <stdlib.h>
int main(){
	int num, cont;
	printf("digite um numero:");
	scanf("%d",&num);
	for(cont=1;cont<=20;cont=cont+1){
		printf("\nnumero = %d",num);
	}
	
	return 0;
}
