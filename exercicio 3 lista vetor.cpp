#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
 
 
 int main(){
 
 int num[19],i,soma=0;
 float media;
 setlocale(LC_ALL,"Portuguese");
 
 for(i=0; i < 20; i++ ){
 
 printf("\nDigite o %i� n�mero: ",i+1);
 scanf("%i",&num[i]);
 
 soma = soma+num[i];
}

  media = soma/i;
  printf("\n A m�dia � %.2f\n",media);
  printf("\n-------------------\n");
  
  for (i=0; i < 20; i++){
  	if (num[i] > media)
  	printf("\nO n�mero %i est� acima da m�dia. \n",num[i]);
  }
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 return 0;
 }
