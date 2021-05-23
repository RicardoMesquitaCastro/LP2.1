/* ) Leia as duas notas de 7 alunos, calcule e imprima a média de cada
um e defina sua situação usando uma condicional encadeada
(Aprovado, Reprovado e Quinta Prova) e ao final imprima uma média
das notas de todos os alunos.*/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
   
 int main(){
 
 		int cont=0, cont2=0, cont3=0, aluno[3];
 		float nota[6], m, mg, s, sf=0;
 		
 		setlocale(LC_ALL,"Portuguese");
 		
 		printf("\n\n -------------------------------------------------- ");
 		printf("\n\n\t\t Informativo sobre o sistemas de notas. ");
 		printf("\n\n\n\t Aprovado = Nota maior ou igual a 60.");
 		printf("\n\n\t Quinta prova = Nota maior ou igual a 30 e menor que 60.");
		printf("\n\n\t Reprovado = Nota menor que 30.");
		
	
		for(cont=0 ; cont<3 ; cont++){
			
 		printf("\n\n -------------------------------------------------- ");
		printf("\n\t Informe a primeira nota do aluno %d: ", cont+1);
		scanf("%f", &nota[cont]); 
		fflush(stdin);
		
		printf("\n\t Informe a segunda nota do aluno %d: ", cont+1);
		scanf("%f", &nota[cont2]); 
		fflush(stdin);
		
				 m = (nota[cont] + nota[cont2]) / 2; 
				mg = mg + m;
				sf = mg / 3;
				
		printf("\n\n\t\t Media do aluno: %.2f ", m);
	}
	
		if (m >= 60)
			printf("\n\n\t ------_Aluno aprovado! ------_", cont + 1, m);
			
		if (m >= 30 & m<60)
			printf("\n\n\t ------ Aluno de 5° prova! ------", cont + 1, m);
			
		if (m < 30)
			printf("\n\n\t ------ Aluno reprovado! ------", cont + 1, m);	
			
		printf("\n\n -------------------------------------------------- ");


		sf = mg / 3;
		
		printf("\n\n -------------------------------------------------- ");
		printf("\n\n\t Media geral da turma: %.2f \n\n", sf);
		printf("\n\n -------------------------------------------------- \n\n");
 
 
 	system("pause");
 }
