#include<stdio.h>
int main()
{
int i,j,n,igno = 0,maior = 0;
int vetor[10] = {0,0,0,0,0,0,0,0,0,0},vetor2[10] = {0,0,0,0,0,0,0,0,0,0};
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
		if((aux<0)||(10<aux))
		{
			igno++;
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
	vetor2[j] = vetor[j];
}
printf("     ^\n");
for(i=20;i>=0;i--)
{
	switch((i+1))
	{
		case 20:
		printf("%4d +",maior);
		break;
		case 15:
		printf("%4d +",(maior/2));
		break;
		case 10:
		printf("%4d +",(maior/4));
		break;
		case 5:
		printf("%4d +",((3*maior)/4));
		break;
		default:
		printf("     |");
		break;
	}
	if(i==20)
	{
		for(j=0;j<10;j++)
		{
			(vetor[j]==i) ? printf("_ "):printf("  ");
		}
	}else{
		for(j=0;j<10;j++)
		{
			if(vetor[j]==(i+1))
			{
				printf("*|");
				vetor[j]--;
			}else{
				((vetor2[j]+1)==(i+1)) ? printf("_"):printf(" ");
				(vetor[j+1]==(i+1)) ? printf("|"):printf(" ");
			}
		}
	}
	printf("\n");
}
printf("   0 +--------+---------+->\n");
printf("    0.0       5.0      10.0\n");
printf("Valores ignorados: %d\n",igno);
return 0;
}
