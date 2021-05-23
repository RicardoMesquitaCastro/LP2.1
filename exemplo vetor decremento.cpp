// ler um vetor de 5 posições e imprimir os elementos em ordem invrsa

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main()
{
	int vet[5], i;
	setlocale(LC_ALL,"Portuguese");
	for(i=0; i<5; i++)
	{
		printf("\n\tDigite o %dº Elemento do Vetor: ",i+1);
		scanf("%d",&vet[i]);
	}
	system ("pause");
	system ("cls");
	for (i=4; i>=0; i--)
	{
		printf("\n\t %dº Elemento do Vetor: %d\n ",i+1,vet[i]);
		
			
	}
	return 0;
}
