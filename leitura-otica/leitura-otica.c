#include <stdio.h>

char alternativa(int a)
{
	if(a == 0) return 'A';
	else if(a == 1) return 'B';
	else if(a == 2) return 'C';
	else if(a == 3) return 'D';
	else return 'E';
}

int main ()
{
	int i, j, n, p, preto = 0, resp = 0;
	scanf("%d", &n);
	while(n != 0)
	{
		for(i = 0 ; i < n ; ++i)
		{
			for(j = 0 ; j < 5 ; ++j)
			{
				scanf("%d", &resp);
				if(resp >= 0 && resp <= 127)
				{
					++preto;
					p = j;
				}
			}
			if(preto ==1) printf("%c\n", alternativa(p));
			else printf("*\n");
			preto = 0;
		}
		scanf("%d", &n);
	}
	return 0;
}
