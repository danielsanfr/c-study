#include<stdio.h>
int main()
{
int i,n,m,soma=0;
scanf("%d\n",&n);
for(i=0;i<n;++i)
{
	scanf("%d\n",&m);
	soma = soma + m;
}
printf("%d",soma);
return 0;
}
