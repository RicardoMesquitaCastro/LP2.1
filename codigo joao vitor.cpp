#include <stdio.h>
#include<stdlib.h>
#include <locale.h>

int main (void){
	setlocale(LC_ALL, "portuguese");
	float nota1, nota2, soma, media, somacont=0, mediasl, notas[7];
	int i;
	
	for(i=1; i<8; i++){
	
	
	printf ("\n\t Media final \n\n");
	printf("\n\t Escreva a primeira nota  do aluno %d: ", i);
	scanf ("%f", &nota1);
	printf("\n\t Escreva a segunda nota do aluno %d: ", i);
	scanf ("%f", &nota2); 
	soma= nota1+nota2;
	media= soma/2;
	somacont=somacont+soma;
	
	
	if(media>=7.0){
		printf("\n\t Parabéns!, aluno aprovado");
		printf("\n\t Média do aluno: %.2f\n\n\t", media);
		notas[i]=media;
		system ("pause");
		system ("cls");
	}
	else
	if(media<3.5){
		printf("\n\t Aluno reprovado. \n\t Média do aluno : %.2f\n\n\t", media);
		notas[i]=media;
		system ("pause");
		system ("cls");
	}
	else {
		
		printf("\n\t Aluno ficou de quinta prova, Boa Sorte!");
		printf ("\n\t Media do aluno: %.2f\n\n\t", media);
		notas[i]=media;
		system ("pause");
		system ("cls");
	}
	}
	
	somacont= somacont/2;
	mediasl= somacont/(i-1);
	
	for(i=1; i<=7; i++){
	printf ("\n\t Media do aluno %d = %.2f", i, notas[i]);
	}
	
	printf ("\n\t Media geral da sala = %.2f\n\n\t", mediasl);
	
	system("pause");
	return (0);
}
