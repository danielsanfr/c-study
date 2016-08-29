#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int i, j, m, n, aux = 0;
    int a = 0, b = 0, c = 0, d = 0, x = 0, y = 0, t = 0;
    int** matriz;
    scanf("%d%d", &n, &m);
    while(m != 0 || n != 0)
    {
		if(m <= 0 || n <= 0) printf("0.00\n");
		else
		{
			matriz = (int**) malloc(sizeof(int*)*n);
			for(i = 0; i < n; ++i) matriz[i] = (int*) malloc(sizeof(int)*m);
			for(i = 0; i < n; ++i)
			{
				for(j = 0; j < m; ++j)
				{
					matriz[i][j] = ++aux;
					t += matriz[i][j];
					if(j == 0) a += matriz[i][j];
					if(j == (m - 1)) b += matriz[i][j];
					if(i == 0) c += matriz[i][j];
					if(i == (n - 1)) d += matriz[i][j];
					if(i == j) x += matriz[i][j];
				}
			}
			for(i = (n - 1), j = (m - 1) ; (i >= 0) && (j >= 0) ; --i, --j) y += matriz[i][j];
			free(matriz);
			matriz = NULL;
			printf("%.2f\n", (float)( t - (x+y) + (a *b) - (c*d) ) / (n*m));
		}
		scanf("%d%d", &n, &m);
		aux = 0 ; a = 0 ; b = 0 ; c = 0 ; d = 0 ; x = 0 ; y = 0 ; t = 0;
    }
    return 0;
}
