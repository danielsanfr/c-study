#include<stdio.h>
int main()
{
int i,j,n,vetor[10] = {0,0,0,0,0,0,0,0,0,0};
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
printf("+------------>\n");
return 0;
}
