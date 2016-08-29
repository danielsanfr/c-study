#include <stdio.h>

int main ()
{
	int i, n, m;
	scanf("%d\n%d", &m, &n);
	for(i = n ; i > 0 ; --i)
	{
		if(i % m == 0)
		{
			printf("%d\n", i);
			break;
		}
		if(i == 1) printf("sem multiplos menores que %d\n", n);
	}
	return 0;
}
