#include<stdio.h>
 #include<stdlib.h>
 #include<locale.h>
   
 int main(){
                                            

char nome[5][30];	
float media[4],mdg=0,mdgt,maior=0;
int cont;

setlocale(LC_ALL,"Portuguese");

printf("\n\tM�DIAS DOS ALUNOS DO CURSO DE GTI SEGUNDO PER�ODO: \n\n");

for (cont= 0; cont < 5; cont++){

printf("\nDigite o nome do %i� aluno: ",cont+1);
gets (nome[cont]);

printf("\nDigite a m�dia do %i� aluno : ",cont+1);
scanf("%f",&media[cont]);
fflush(stdin);
 
 mdg = mdg+media[cont];
 mdgt = mdg/5;
 
 }
 printf("\nM�dia geral %.2f \n",mdgt);
 printf("\n-------------------\n");

for (cont=0; cont <5; cont++){
	
	if(media[cont] > mdgt)
	
	printf("\n%s superou a m�dia geral com %.2f\n ",nome[cont],media[cont]);

}
return 0;
}	
 	
 	
 	
 	
 	
 	
 	
 
 	
 	
 	
 	
 	
 	
 	
 
