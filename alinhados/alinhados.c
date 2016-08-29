#include <stdio.h>
#include <stdlib.h>

typedef struct ponto
{
	int x;
	int y;
} Ponto;

float coeficiente(int x1, int y1, int x0, int y0)
{
	return (y1 - y0)/(float)(x1 - x0);
}

int main ()
{
	Ponto *pendrive;
	int i, n, aux = 0;
	float a, b;
	scanf("%d", &n);
	while(n != 0)
	{
		pendrive = (Ponto*) malloc(sizeof(Ponto)*n);
		for(i = 0 ; i < n ; ++i) scanf("%d %d", &pendrive[i].x, &pendrive[i].y);
		if(pendrive[0].x == pendrive[1].x)// for(i = 0 ; i < n ; ++i) if(pendrive[0].x != pendrive[i].x) ++aux;
		{
			for(i = 0 ; i < n ; ++i) if(pendrive[0].x != pendrive[i].x) ++aux;
		}
		else
		{
			a = coeficiente(pendrive[1].x, pendrive[1].y, pendrive[0].x, pendrive[0].y);
			b = pendrive[0].y - (a * pendrive[0].x);
			for(i = 0 ; i < n ; ++i) if(((a*pendrive[i].x) + b) != pendrive[i].y) ++aux;
		}
		if(aux == 0)
			printf("ALINHADOS\n");
		else
			printf("NAO_ALINHADOS\n");
		a = 0 ; b = 0; aux = 0;
		free(pendrive);
		scanf("%d", &n);
	}	
return 0;
}
