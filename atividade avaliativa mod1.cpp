/* Neste exerc�cio foi utilizado o a vari�vel soma=0 para acumula��o do valor do loop
das somas das notas dos 7 alunos para realizar a m�dia geral. Foi utilizado o comando
FOR para repeti��o com pr� condi��o que no caso foram 7 vezes. A cada repeti��o do loop
foi usado a condicional encadeada para impress�o da condi��o do aluno (Aprovado, Quinta
prova, Reprovado).
A variavel mdg foi utilizada para impress�o da m�dia geral de todas as notas.*/
#include <stdio.h>
#include <locale.h>
#include<stdlib.h>
int main (){
float nota1,nota2,md,mdg,soma,somaf=0;
int cont;
setlocale(LC_ALL,"Portuguese");
printf("\n\tM�DIAS DOS ALUNOS DO CURSO DE GTI SEGUNDO PER�ODO: \n\n");
for (cont= 0; cont < 7; cont++){
printf("\nDigite a primeira nota: ");
scanf("%f",&nota1);
printf("\nDigite a segunda nota : ");
scanf("%f",&nota2);
soma = nota1 + nota2;
somaf = somaf+soma;
md = soma/2;
if (md < 3){
printf("\nALUNO REPROVADO. \n");
printf("\n ##### A M�dia do aluno %d � %.2f ######\n",cont+1,md);
}
else if (md >= 3 && md < 6){
printf("\nALUNO DE QUINTA PROVA. \n");
printf("\n ##### M�dia do aluno %d: %.2f ######\n",cont+1,md);
}
else{
printf("\nAlUNO APROVADO. \n");
printf("\n ##### M�dia do aluno %d: %.2f ######\n",cont+1,md);
}
}
mdg = (somaf/cont)/2;
printf("\nM�DIA GERAL %.2f",mdg);
return 0;
}
