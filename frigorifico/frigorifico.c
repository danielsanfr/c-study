#include <stdio.h>
#include <stdlib.h>

typedef struct bovino
{
	int* num_id;
	float* peso;
} Bovino;

int main ()
{
	int i, n, menor = 0, maior = 0;
	float menor_peso = 1000000, maior_peso = 0;
	Bovino boi;
	scanf("%d", &n);
	boi.num_id = (int*) malloc(sizeof(int)*n);
	boi.peso = (float*) malloc(sizeof(float)*n);
	for(i = 0 ; i < n ; ++i)
	{
		scanf("%d %f", &boi.num_id[i], &boi.peso[i]);
		if(boi.peso[i] > maior_peso)
		{
			maior_peso = boi.peso[i];
			maior = i;
		}
		if(boi.peso[i] < menor_peso)
		{
			menor_peso = boi.peso[i];
			menor = i;
		}
	}
	printf("Gordo: id: %d peso: %.2fKg\nMagro: id: %d peso: %.2fKg\n", boi.num_id[maior], maior_peso, boi.num_id[menor], menor_peso);
	return 0;
}
