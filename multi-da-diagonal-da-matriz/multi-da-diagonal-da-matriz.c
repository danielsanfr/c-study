#include <stdio.h>

int main ()
{
	int i, j, k, matriz[4][4];
	scanf("%d", &k);
	while(k != 0)
	{
		for(j = 0 ; j < 4 ; ++j)
		{
			for(i = 0 ; i < 4 ; ++i)
			{
				scanf("%d", &matriz[i][j]);
			}
		}
		for(i = 0 ; i < 4 ; ++i)
		{
			for(j = 0 ; j < 4 ; ++j)
			{
				if(i == j) printf("%d ", k*matriz[i][j]);
				else printf("%d ", matriz[i][j]);
			}
			printf("\n");
		}
		scanf("%d", &k);
	}
	return 0;
}
