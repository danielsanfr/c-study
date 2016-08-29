#include <stdio.h>

int main()
{
	int i, j, n, maior, vetor[10] = {0,0,0,0,0,0,0,0,0,0};
	float aux;
	scanf("%d\n",&n);
	for(i=0;i<n;i++)
	{
		scanf("%f",&aux);
		for(j=0;j<10;j++)
		{
			if(j==0)
			{
				if((j<=aux)&&(aux<=(j+1)))
				{
				vetor[j]++;
				j = 10;
				}
			}else{
				if((j<aux)&&(aux<=(j+1)))
				{
				vetor[j]++;
				j = 10;
				}
			}
		}
	}
	maior = vetor[0];
	for(i = 0 ; i < 10 ; ++i) if(vetor[i] > maior) maior = vetor[i];
	printf("^\n");
	for(j=9;j>=0;j--)
	{
		printf("|");
		while(vetor[j]>0)
		{
		printf("*");
		vetor[j]--;
		}
		printf("\n");
	}
	printf("+");
	for(i = 1 ; i <= maior ; ++i) printf("-");
	printf(">\n");
	return 0;
}
