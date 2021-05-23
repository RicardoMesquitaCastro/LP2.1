#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
 
 
 int main(){
 	
 	float sal[5] = {937.00,10001.10,15047.00,1724.58,1456.32},maior,menor;
 	int i,posmaior,posmenor;
 	
 	setlocale(LC_ALL,"Portuguese");
 	
 	for(i= 0; i <= 4; i++ ){
	 
 		printf("\nExibindo os Valores do Salário %d: %.2f reais\n",i+1,sal[i]);
 	}
 	 maior = sal[0];
 	 for(i=0; i <=4; i++){
 	 	
 	 	if(sal[i] > maior){
		  
 	 	maior = sal[i];
 	 	posmaior = i+1;
 }
 	 }
 	  menor = sal[0];
 	 for(i=0; i <=4; i++){
	  
 	    if (sal[i]< menor){
		  
		menor = sal[i]; 
		posmenor = i+1;  
 	 	
	}
}
	
	    	 		   
	  
	  printf("\nO maior salário na posição %d é de %.2f reais ",posmaior,maior);
  	 printf("\nO menor salário na posição %d é de %.2f reais ",posmenor,menor);
 	
 	return 0;
 }
