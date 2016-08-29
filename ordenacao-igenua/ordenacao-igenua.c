#include <stdio.h>
#include <stdlib.h>

void coloca_num(int num, int j, int i, int* vetor)
{
	int k;
	for(k = i ; k > j ; --k) vetor[k] = vetor[k-1];
	vetor[j] = num;
}

int main ()
{
	int num, i, j, n;
	int* vetor;
	scanf("%d", &n);
	vetor = (int*) malloc(sizeof(int)*n);
	for(i = 0 ; i < n ; ++i)
	{
		scanf("%d", &num);
		if(i == 0) vetor[i] = num;
		else
		{
			for(j = 0 ; j < i ; ++j)
			{
				if(num < vetor[j])
				{
					coloca_num(num, j, i, vetor);
					break;
				}
			}
			if(i == j) vetor[i] = num;
		}
	}
	for(i = 0 ; i < n ; ++i) printf("[%d]", vetor[i]);
	printf("\n");
	return 0;
}
