#include <stdio.h>
int main(){
	int mat[3][4],lin,col,contpar=0,contimpar=0;
	printf("\ndigite valor para os elementos da matriz\n\n");
	for(lin=0; lin<3; lin++)
		for(col=0; col<4; col++){
			printf("\nelementos[%d][%d]",lin,col);
			scanf("%d",&mat[lin][col]);
		}
	printf("\n\n*saida*\n\n");
	for(lin=0; lin<3; lin++)
		for(col=0; col<4; col++){
			if(mat[lin][col]%2==0)
				contpar++;
			else
			contimpar++;
		}
	printf("\npares: %d",contpar);
	printf("\nimpares: %d",contimpar);
	return 0;
}
