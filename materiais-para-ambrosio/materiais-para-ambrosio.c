#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct _lista Lista;

struct _lista
{
	char material[25];
	float preco;
};

int main ()
{
	int i, j, t, n;
	float din, troco, total = 0;
	Lista *produto;
	Lista *aux;
	scanf("%f", &din);
	scanf("%d", &n);
	aux = (Lista*) malloc(sizeof(Lista)*n);
	produto = (Lista*) malloc(sizeof(Lista));
	for(i = 0 ; i < n ; ++i) scanf("%s %f", aux[i].material, &aux[i].preco);
	for(i = 0 ; i < n - 1 ; ++i)
	{
		for(j = i + 1 ; j < n ; ++j)
		{
			if(aux[i].preco > aux[j].preco)
			{
				*produto = aux[i];
				aux[i] = aux[j];
				aux[j] = *produto;
			}
		}
	}
	produto = (Lista*) realloc(produto, sizeof(Lista)*n);
	j = 0;
	for(i = 0 ; i < n ; ++i)
	{
		if(din >= (total + aux[i].preco))
		{
			total += aux[i].preco;
			produto[i] = aux[i];
			++j;
		}
		else break;
	}
	t = j;
	produto = (Lista*) realloc(produto, sizeof(Lista)*t);
	aux = (Lista*) realloc(aux, sizeof(Lista)*1);
	for(i = 0 ; i < t - 1 ; ++i)
	{
		for(j = i + 1 ; j < t ; ++j)
		{
			if(strcmp(produto[i].material, produto[j].material) > 0)
			{
				*aux = produto[i];
				produto[i] = produto[j];
				produto[j] = *aux;
			}
		}
	}
	for(i = 0 ; i < t ; ++i) printf("%s %.2f\n",produto[i].material, produto[i].preco);
	troco = din - total;
	printf("%.2f\n", troco);
	return 0;
}
