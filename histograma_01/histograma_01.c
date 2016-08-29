#include<stdio.h>
int main()
{
int i, n;
for(i=0;i<10;i++)
{
	scanf("%d\n",&n);
	for(;n>0;n--)
	{
	printf("*");
	}
	printf("\n");
}
return 0;
}
