#include<stdio.h>
int main()
{
int i,j,n,maior = 0,vetor[10] = {0,0,0,0,0,0,0,0,0,0};
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
for(j=0;j<10;j++)
{
	if(vetor[j]>maior)
	{
		maior = vetor[j];
	}
}
for(j=0;j<10;j++)
{
	vetor[j] = (vetor[j]*20)/maior;
}
printf("  ^\n");
for(j=9;j>=0;j--)
{
	if(((j+1)%5) == 0)
	{
		printf("%2d|",(j+1));
	}else{
		printf("  |");
	}
	while(vetor[j]>0)
	{
	printf("*");
	vetor[j]--;
	}
	printf("\n");
}
printf(" 0+----+----+----+----+>\n");
printf("  0   %d   %d   %d   %d\n",(maior/4),(maior/2),((3*maior)/4),maior);
return 0;
}
