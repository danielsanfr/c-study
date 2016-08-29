#include<stdio.h>
int main()
{
int i,vetor[101];
for(i=0;i<101;++i)
{
	scanf("%d\n",&vetor[i]);
}
for(i=0;i<100;++i)
{
	if(vetor[100]==vetor[i]) printf("%d\n",i);
}
return 0;
}
