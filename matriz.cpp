#include <stdio.h>
int main(){
	int mat[4][4], lin, col;
	printf("\ndigite valor para os elementos da matriz\n");
	for(lin=0; lin<4; lin++)
		for(col=0; col<4; col++)
			if(lin==col){
				printf("elementos[%d][%d]=0\n",lin,col);
				mat[lin][col]=0;
			}else{
				printf("elementos[%d][%d]=",lin,col);
				scanf("%a",&mat[lin][col]);
			}
	printf("\nlistagem dos elementos da matriz\n");
	for(lin=0; lin<4; lin++)
		for(col=0; col<4; col++)
		printf("\nelementos[%d][%d]=%d",lin,col,mat[lin][col]);
}
