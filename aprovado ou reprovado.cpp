#include <stdio.h>
int main(void){
	float nota;
	printf("\ndigite a nota: \n");
	scanf("%f",&nota);
	printf("%f\n",nota);
	if(nota>=5)
		printf("parabens vc foi aprovado \n");
	if(nota<5)
		printf("vc foi reprovado \n");
	return 0;
}
