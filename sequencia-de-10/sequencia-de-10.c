#include<stdio.h>
int main()
{
int i, vetor[10],cont = 0;
for(i = 0 ; i < 10 ; ++i)
{
	scanf("%d",&vetor[i]);
}
for(i = 0 ; i < 10 ; ++i)
{
	if(vetor[i] == vetor[9]) ++cont;
}
printf("O numero %d apareceu %d vezes\n", vetor[9], cont);
return 0;
}
