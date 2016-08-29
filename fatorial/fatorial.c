#include <stdio.h>

int fatorial(int num)
{
	int i, fat = 1;
	for(i = 1 ; i <= num ; ++i) fat = fat * i;
	return fat;
}

int main ()
{
	int num;
	scanf("%d", &num);
	while(num != -1)
	{
		printf("%d\n", fatorial(num));
		scanf("%d", &num);
	}
	return 0;
}
