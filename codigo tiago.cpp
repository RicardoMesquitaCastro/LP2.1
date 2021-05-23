#include<stdio.h>

#include<stdlib.h>

#include<locale.h>

int main ()

{

	char nome[7][40];

	float nota1[7], nota2[7], nota3[7], nota4[7], media[7], somanota[7], mediasala=0;

	int i, falta[7], aprovado=0, reprovado=0, quintapv=0, reprofalta=0;

	setlocale(LC_ALL, "portuguese");

	for (i=0; i< 2; i++)

	{

		printf("\n\tDigite o nome do %dº aluno: ", i+1);

		scanf("%s", &nome[i]);

		printf("\n\tDigite a quantidade de faltas do %dº aluno: ", i+1);

		scanf("%d", &falta[i]);

		printf("\n\tDigite primeira nota do %dº Aluno: ", i+1);

		scanf ("%f", &nota1[i]);

		printf("\n\tDigite segunda nota do %dº Aluno: ", i+1);

		scanf ("%f", &nota2[i]);

		printf("\n\tDigite terceira nota do %dº Aluno: ", i+1);

		scanf ("%f", &nota3[i]);

		printf("\n\tDigite quarta nota do %dº Aluno: ", i+1);

		scanf ("%f", &nota4[i]);

		somanota[i] = nota1[i] + nota2[i] + nota3[i] + nota4[i];


		media[i] = somanota[i] /4;

	//	system("cls");

		mediasala = mediasala + media[i]/2;

	}

	for (i=0; i< 2; i++)

	{

		if (falta[i]<=37)	

		{

			printf("\n\tO Aluno: %s", nome[i]);

			printf("\n\tQuatidade de faltas: %d", falta[i]);

			printf("\n\tMédia do Aluno %d = %.2f", i+1, media[i]);

			if (media[i] >= 6)

			{

			printf("\n\tResultado final: APROVADO\n");

			aprovado++;

			}

			else if (media[i] <= 3)

			{

			printf("\n\tResultado final: REPROVADO\n");

			reprovado++;

			}

			else

			{

			printf("\n\tResultado final: QUINTA PROVA\n");

			quintapv++;

			}

		}

		else

		{

			printf("\n\tO Aluno: %s", nome[i]);

			printf("\n\tQuatidade de faltas: %d", falta[i]);

			printf("\n\tMédia do Aluno %d = %.2f", i+1, media[i]);

			printf("\n\tResultado final: REPROVADO por FALTA\n");

			reprofalta++;

		}

	}

	printf("\n\tQuantidade de alunos APROVADO: %d", aprovado);

	printf("\n\tQuantidade de alunos QUINTA PROVA: %d", quintapv);

	printf("\n\tQuantidade de alunos REPROVADO: %d", reprovado);

	printf("\n\tQuantidade de alunos REPROVADO POR FALTA: %d\n", reprofalta);

	printf("\n\n\t ---SALA OBTEVE A NOTA %.2f NA MEDIA---\n\t", mediasala);

	system ("pause");

	return (0);

}
