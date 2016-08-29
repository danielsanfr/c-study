#include<stdio.h>
#include<math.h>
int main()
{
int i, n = 0, cont = 0;
float aux[10000], desv = 0, media, soma = 0;
scanf("%f\n", &aux[n]);
while(aux[n] != -1)
{
	soma = soma + aux[n];
	++n;
	scanf("%f\n", &aux[n]);
}
media = soma/n;
for(i = 0 ; i < n ; ++i)
{
	desv = desv + ((aux[i] - media) * (aux[i] - media));
	if(aux[i] > media) ++cont;
}
desv = desv/(n-1);
printf("%.2f\n%.2f\n%d\n", media, sqrt(desv), cont);
return 0;
}
