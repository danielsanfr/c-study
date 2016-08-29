#include <stdio.h>

int main ()
{
	int aux, i, x, y;
	scanf("%d %d", &x, &y);
	if(x > y)
	{
		aux = x;
		x = y;
		y = aux;
	}
	for(i = x ; i <= y ; ++i) if(i % 10 != 0 && i % (i / 10) == 0) printf("%d\n", i);
	return 0;
}
