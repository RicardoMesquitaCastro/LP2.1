#include<stdio.h>
 #include<stdlib.h>
 #include<locale.h>
   
 int main(){
 	char nome[7][30];
 	float notas[7],nota,soma=0,mediafinal[7];
	 int cont,cont2,cont3,faltas[7],faltast=0,falta;
	 
	 setlocale(LC_ALL,"Portuguese");
	 
	 for(cont=0; cont < 2; cont++){
	 	printf("\nDigite o nome do %dº aluno: ",cont+1);
			 gets (nome[cont]);
			 
		mediafinal[cont2]=mediafinal[cont];	 
			soma =0;
			faltast = 0; 
	 	    for(cont2=0; cont2 < 2; cont2++){
	 	   		 			
			printf("\nDigite a nota do %iº bimestre: ",cont+1);
			scanf("%f",&notas[cont2]);
			
			
			printf("\nDigite o número de faltas do %iº bimestre: ",cont+1);
			scanf("%d",&faltas[cont2]); 
			printf("\n-------------------\n");	    	
	 	    fflush(stdin);
			 
			 soma = soma + notas[cont2]; //certo essa porra
			
			 faltast = faltast+ faltas[cont2]; //certo essa porra
		
		    }
		     mediafinal[cont2] = soma/ 2;
		     faltas[cont2] = faltast;
		    printf("\nmediaf %.2f e faltas %i",mediafinal[cont2],faltas[cont2]); 
		    	printf("\n-------------------\n");


	 }
			for(cont3=0; cont3 <2; cont3++){
			
			
		    	if (faltas[cont] <= 37 && mediafinal[cont] >= 60)
	     printf("\nO aluno %s de média %.2f e %i faltas está Aprovado ",nome[cont],mediafinal[cont3],faltas[cont2]);
	     
	     else if (faltas[cont] > 37 && mediafinal[cont] < 30)
		 printf("\nO aluno %s de média %.2f e %i faltas está Reprovado ",nome[cont],mediafinal[cont],faltas[cont]); 
		 
		 else if (faltas[cont] <= 37 && mediafinal[cont] >= 30 && mediafinal[cont2] < 60)
		 printf("\nO aluno %s de média %.2f e %i faltas está de Recuperação ",nome[cont],mediafinal[cont],faltas[cont]);   	
	    
		 else
		 printf("\nO aluno %s de média %.2f e %i faltas está de Reprovad ",nome[cont],mediafinal[cont],faltas[cont]);
    }

		
	
	   	    
	    
		    return 0;
 	    
 	}
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
