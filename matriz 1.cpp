#include <stdio.h>
int main(){
	int mat1[4][4], mat2[4][4], lin, col;
	printf("\n digite a matiz original\n");
	for(lin=0; lin<4; lin++)
		for(col=0; col<4; col++){
		scanf("%d",&mat1[lin][col]);
		mat2[col][lin]=mat1[lin][col];
		}
	printf("\nmatriz geradz\n");
	for(lin=0; lin<4; lin++){
		for(col=0; col<4; col++)
		printf("%d\n",mat2[lin][col]);
	}
	return 0;
}
