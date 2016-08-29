#include <stdio.h>

int fatorial(int num)
{
	int i, fat = 1;
	for(i = 1 ; i <= num ; ++i) fat = fat * i;
	return fat;
}

int main ()
{
	int i, n;
	float serie = 0.0, x = 0.0;
	scanf("%d", &n);
	for(i = 1 ; i <= n ; ++i)
	{
		x = (x * 2.0) + 1.0;
		if(i % 2 != 0) serie += fatorial(i) / x;
		else serie -= fatorial(i) / x;
	}
	printf("%.2lf\n", serie);
	return 0;
}
