#include<stdio.h>
int main()
{
int i,x;
float inves,juros,rend;
scanf("%f %f %d",&inves,&juros,&x);
x = x*12;
for(i=0;i<x;i=i+3)
{
	rend = inves*juros;
	inves = inves+rend;
	printf("Rendimento: %.2f Montante: %.2f\n",rend,inves);
}
return 0;
}
