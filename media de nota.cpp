#include <stdio.h>
int main(){
	float nota1, nota2,nota3,media;
	printf("nota 1 =\n");
	scanf("%f",&nota1);
	printf("nota 2 =\n");
	scanf("%f",&nota2);
	printf("nota 3 =\n");
	scanf("%f",&nota3);
	media=(nota1+nota2+nota3)/3;
	printf("media= %f",media);
		if(media>=7){
			printf(",aluno aprovado");
		}else
			printf(",alunos reprovado");
}
