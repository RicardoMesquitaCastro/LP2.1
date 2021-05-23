/* Neste exercício foi utilizado o a variável soma=0 para acumulação do valor do loop
das somas das notas dos 7 alunos para realizar a média geral. Foi utilizado o comando
FOR para repetição com pré condição que no caso foram 7 vezes. A cada repetição do loop
foi usado a condicional encadeada para impressão da condição do aluno (Aprovado, Quinta
prova, Reprovado).
A variavel mdg foi utilizada para impressão da média geral de todas as notas.*/
#include <stdio.h>
#include <locale.h>
#include<stdlib.h>
int main (){
float nota1,nota2,md,mdg,soma,somaf=0;
int cont;
setlocale(LC_ALL,"Portuguese");
printf("\n\tMÉDIAS DOS ALUNOS DO CURSO DE GTI SEGUNDO PERÍODO: \n\n");
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
printf("\n ##### A Média do aluno %d é %.2f ######\n",cont+1,md);
}
else if (md >= 3 && md < 6){
printf("\nALUNO DE QUINTA PROVA. \n");
printf("\n ##### Média do aluno %d: %.2f ######\n",cont+1,md);
}
else{
printf("\nAlUNO APROVADO. \n");
printf("\n ##### Média do aluno %d: %.2f ######\n",cont+1,md);
}
}
mdg = (somaf/cont)/2;
printf("\nMÉDIA GERAL %.2f",mdg);
return 0;
}
