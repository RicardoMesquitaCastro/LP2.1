#include<stdio.h>
 #include<stdlib.h>
 #include<locale.h>
   
 int main(){
 	
float media[10];
int i;
 	
setlocale(LC_ALL,"Portuguese");

for(i=0; i < 10; i++){

printf("\nDigite a m�dia do %d� Aluno: ",i+1);
scanf("%f",&media[i]);
fflush(stdin);
}
 printf("\n-------------------\n");
for(i=9; i>=0; i--)
printf("\n A m�dia do %d� foi %.2f: ",i+1,media[i]);

 	
 	
 return 0;	
 	
 	
 }
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
