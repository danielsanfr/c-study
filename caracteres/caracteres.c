#include<stdio.h>
#include<stdlib.h>
int main()
{
int i, n;
char* str;
scanf("%d\n", &n);
while(n!=0)
{
	str = (char*) malloc(sizeof(char) * n);
	gets(str);
	for(i = n-1 ; i>=0 ; --i)
	{
		printf("%c",str[i]);
	}
	printf("\n");
	scanf("%d\n", &n);
}
return 0;
}
