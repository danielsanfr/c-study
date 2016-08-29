#include <stdio.h>

int inverte(int a)
{
	int aux, tam = 1, i, j = 1, num_inver = 0;
	while(1)
	{
		if(a >= tam && a < tam*10) break;
		tam = tam * 10;
	}
	aux = tam;
	for(i = 10 ; i <= tam ; i = i * 10)
	{
		num_inver = num_inver + ((a % i) / j)*aux;
		j = j * 10;
		aux = aux / 10;
	}
	return (num_inver + (a / tam));
}

int main ()
{
	int a, b, i, n, cont = 0;
	scanf("%d", &n);

	for(i = 0 ; i < n ; ++i)
	{
		scanf("%d", &a);
		if (a < 10) printf("%d %d\n", cont, a);
		else if(a == inverte(a)) printf("%d %d\n", cont, a);
		else
		{
			while(1)
			{
				++cont;
				b = inverte(a);
				if((a + b) == inverte((a + b)))break;
				else a = a + b;
			}
		printf("%d %d\n", cont, (a + b));
		cont = 0; a = 0; b = 0;
		}
	}
	return 0;
}
