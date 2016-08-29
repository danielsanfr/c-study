#include <stdio.h>

void inverte(int a)
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
	printf("%d\n", (num_inver + (a / tam)));
}

int main ()
{
	int num;
	scanf("%d", &num);
	inverte(num);
	return 0;
}
