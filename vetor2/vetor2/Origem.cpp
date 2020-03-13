#include<stdio.h>
#include<stdlib.h>

#define TAMANHOVETOR 5

int  main()
{
	int vet[TAMANHOVETOR] = { 0 };
	for (int i = 0; i < TAMANHOVETOR; i++)
	{
		printf_s("Digite o valor da posicao %d do vetor:\n", i);
		scanf_s("%d", &vet[i]);
	}

	printf_s("Vetor Digitado:\n");
	for (int i = 0; i < TAMANHOVETOR; i++)
	{
		printf("%d, \a", vet[i]);
	}
	printf("\n");

	printf_s("Vetor Inverso:\n");
	for (int i = (TAMANHOVETOR - 1); i >= 0; i--)
	{
		printf("%d, \a", vet[i]);
	}
		system("pause");
		return 0;
	
}