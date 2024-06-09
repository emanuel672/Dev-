#include <stdio.h>
int main(){
	int mat1[3][3], lin, col, maior=0, igual=0;
	printf("\n digite valor para os elementos da matriz\n\n");
	for(lin=0; lin<3; lin++)
		for(col=0; col<3; col++){
			scanf("%d",&mat1[lin][col]);
			if(mat1[lin][col]>maior)
				maior=mat1[lin][col];
		}
	for(lin=0; lin<3; lin++)
		for(col=0; col<3; col++){
			if(mat1[lin][col]==maior)
			igual++;
		}
		printf("\nmaior:%d",maior);
		printf("\n menor: %d",igual);//nao sei oq ele queria coloca aqui doido
		
	return 0;
}

