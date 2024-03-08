#include <stdio.h>
int main(){
int vet[10];
vet[0]= 5;
vet[1]= 6;
vet[3]=8;
vet[4]=12;
vet[5]=18;
vet[6]=22;
vet[7]=34;
vet[8]=78;
vet[9]=45;
	printf("%d posicao 10 do vetor:",vet[10]);
	vet[10]=901;
	scanf("%d",&vet[10]);
}
