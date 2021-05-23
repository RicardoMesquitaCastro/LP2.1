/*Fazer um programa que:
a) leia um vetor vet de N números inteiros;
b) leia um valor inteiro num;
c) determine e exiba a posição de num dentro de VET. Caso num não
 seja encontrado dentro de vet, exiba o valor 0 (zero).*/
#include<stdio.h>
 #include<stdlib.h>
 #include<locale.h>
 int main()
 {
 	int num, i, pos=0, vet[10];
 	setlocale(LC_ALL, "Portuguese");
  	for (i=0; i<10; i++)
 	{
 		printf("\n\tDigite Valor %d do Vetor: ",i+1);
 		scanf ("%d", &vet[i]);
	}
	system("cls");
	printf("\n\tDigite Valor para pesquisa: ");
 	scanf ("%d", &num);
	for (i=0; i<10; i++)
 	{
 		if (num == vet[i])
 		{
 			pos = i+1;
		}
		
	}
	if (pos != 0)
	{
		printf ("\n\t %d - posicao %d", num, pos);
	}
	else
	{
		printf("\n\t %d - Nao existe dentro do vetor.", num);
	}
	return(0);
 }
