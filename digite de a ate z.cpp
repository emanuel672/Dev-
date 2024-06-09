#include <stdio.h>
#include<stdlib.h>
int main(){
	char letra;
	int conta=0,conte=0,conti=0,conto=0,contu=0;
	printf("digite uma letra minuscula (a..z) a cada linha e tecla ENTER:\n");
	scanf("%c",&letra);
	while(letra!='.'){
		switch(letra){
			case'a':
				conta++;break;
			case 'e':
				conte++;break;
			case 'i':
				conti++;break;
			case 'o':
				conto++;break;
			case 'u':
				contu++;break;
		}
		scanf("%c",&letra);
	}
	printf("total de a %d\n",conta);
	printf("total de a %d\n",conte);
	printf("total de a %d\n",conti);
	printf("total de a %d\n",conto);
	printf("total de a %d\n",contu);
	return 0;
}
