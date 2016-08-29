#include <stdio.h>

int main ()
{
	int i, j;
	float vetor[4], aux;
	for(i = 0 ; i < 4 ; ++i) scanf("%f", &vetor[i]);
	for(i = 0 ; i < 3 ; ++i)
	{
		for(j = i ; j < 4 ; ++j)
		{
			if(vetor[i] > vetor[j])
			{
				aux = vetor[i];
				vetor[i] = vetor[j];
				vetor[j] = aux;
			}
		}
	}
	printf("%.2f\n%.2f\n%.2f\n%.2f\n", vetor[0], vetor[2], vetor[3], vetor[1]);
	return 0;
}
/*int main ()
{
	int i, aux, aux_me, aux_ma;
	float altura[4] = {};
	float menor = 100000, maior = 0;
	for(i = 0 ; i < 4 ; ++i) scanf("%f", &altura[i]);
	for(i = 0 ; i < 4 ; ++i)
	{
		if(altura[i] < menor) aux_me = i;
		if(altura[i] > maior) aux_ma = i;
	}
	aux = altura[0]; altura[0] = altura[aux_me]; altura[aux_me] = aux;
	aux = altura[2]; altura[2] = altura[aux_ma]; altura[aux_ma] = aux;
	if(altura[3] > altura[1])
	{
		aux = altura[1]; altura[1] = altura[3]; altura[3] = aux;
	}
	for(i = 0 ; i < 4 ; ++i) printf("%.2f\n", altura[i]);
	return 0;
}*/

/*int main ()
{
	int i;
	float altura[4] = {};
	float menor = 100000, menor2 = 100000, maior = 0, maior2 = 0;
	for(i = 0 ; i < 4 ; ++i) scanf("%f", &altura[i]);
	for(i = 0 ; i < 4 ; ++i)
	{
		if(altura[i] < menor) menor = altura[i];
		if(altura[i] > maior) maior = altura[i];
	}
	printf("%.2f\n", menor);
	for(i = 0 ; i < 4 ; ++i)
	{
		if(altura[i] == maior) continue;
		else if(altura[i] > maior2) maior2 = altura[i];
	}
	printf("%.2f\n%.2f\n", maior2, maior);
	for(i = 0 ; i < 4 ; ++i)
	{
		if(altura[i] == menor) continue;
		else if(altura[i] < menor2) menor2 = altura[i];
	}
	printf("%.2f", menor2);
	return 0;
}*/
