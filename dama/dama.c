#include <stdio.h>
#include <math.h>

int main ()
{
	int aux, i, x1, x2, y1, y2;
	scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
	while(x1 != 0 && y1 != 0 && x2 != 0 && y2 != 0)
	{
		//--x1 ; --y1 ; --x2 ; --y2;
		if(x1 > x2)
		{
			aux = x1;
			x1 = x2;
			x2 = aux;
		}
		if(y1 > y2)
		{
			aux = y1;
			y1 = y2;
			y2 = aux;
		}
		if((x1 == x2 && y1 != y2) || (x1 != x2 && y1 == y2)) printf("1\n");
		else if(x1 != x2 && y1 != y2)
		{
			for(i = x1 ; i < x2 ; ++i) ++y1;
			if(y1 == y2) printf("1\n");
			else printf("2\n");
		}
		else printf("0\n");
		scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
	}
	return 0;
}
