#include <stdio.h>

void inverte(int a)
{
	int tam = 1, i, j = 1;
	while(1)
	{
		if(a >= tam && a < tam*10) break;
		tam = tam * 10;
	}
	for(i = 10 ; i <= tam ; i = i * 10)
	{
		printf("[%d]", ((a % i) / j));
		j = j * 10;
	}
	printf("[%d]\n", (a / tam));
}

int main ()
{
	int num;
	scanf("%d", &num);
	while(num != 0)
	{
		inverte(num);
		scanf("%d", &num);
	}
	return 0;
}
