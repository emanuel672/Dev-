#include <stdio.h>
int main(){
	int vet[100];
	int i;
	for(i=0;i<100;i++)
		scanf("%d",&(vet[i]));
	for(i=99;i>=0;i--)
		printf("%d",vet[i]);
	return 0;
}
