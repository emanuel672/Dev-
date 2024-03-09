#include <stdio.h>
int main(){
	int num,maior,ind;
	maior=0;
	for(ind= 1;ind<= 110;ind = ind + 1){
		scanf(" %d",&num);
		if(num > maior){
			maior=num;
		}
	}
	printf("o maior dos numeros lidos e:\n%d",maior);
	return 0;
}
