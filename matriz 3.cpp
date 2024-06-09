#include <stdio.h>
int main(){
	int mat[3][3], lin, col, maior=0, igual=0;
	printf("\n digite valor para os elementos da matriz\n\n");
	for(lin=0; lin<3; lin++)
	for(col=0; col<3; col++){
		printf("elementos[%d][%d]",lin, col);
		scanf("%d",&mat[lin][col]);
		if(mat[lin][col]>maior){
			maior=mat[lin][col];
			igual=1;
		}
	else
		if(mat[lin][col]==maior){
		igual++;
		}
	}
	printf("\nmaior: %d",maior);
	printf("\nocorrencias do maior: %d",igual);
	return 0;
}

