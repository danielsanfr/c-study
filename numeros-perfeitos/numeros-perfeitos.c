#include <stdio.h>

int soma_divisores(int i)
{
	int j, soma = 0;
	for(j = 1 ; j <= i ; ++j) if((i % j) == 0) soma = soma + j;
	return soma;
}

int main ()
{
	int i, num;
	scanf("%d", &num);
	for(i = 1 ; i < num ; ++i) if((2 * i) == soma_divisores(i)) printf("%d\n", i);
	return 0;
}
