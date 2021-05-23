#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
 
 
 int main(){
 
 int num[19],i,soma=0;
 float media;
 setlocale(LC_ALL,"Portuguese");
 
 for(i=0; i < 20; i++ ){
 
 printf("\nDigite o %iº número: ",i+1);
 scanf("%i",&num[i]);
 
 soma = soma+num[i];
}

  media = soma/i;
  printf("\n A média é %.2f\n",media);
  printf("\n-------------------\n");
  
  for (i=0; i < 20; i++){
  	if (num[i] > media)
  	printf("\nO número %i está acima da média. \n",num[i]);
  }
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 return 0;
 }
