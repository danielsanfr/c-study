#include <stdio.h>

int main ()
{
	double x, y;
	scanf("%lf %lf", &x, &y);
	while(x != 0 || y != 0)
	{
		if(x < 0)
		{
			if(y <= (1/(float)3)*x && y >= 3*x) printf("INTERIOR\n");
			else printf("EXTERIOR\n");
		}else{
			if(y <= 3*x && y >= (1/(float)3)*x) printf("INTERIOR\n");
			else printf("EXTERIOR\n");
		}
		scanf("%lf %lf", &x, &y);
	}
	return 0;
}
