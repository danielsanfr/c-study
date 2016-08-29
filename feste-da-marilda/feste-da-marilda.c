#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main ()
{
	int i, j, n;
	char aux[100];
	char** nomes;
	scanf("%d", &n);
	while(n != 0)
	{
		nomes = (char**) malloc(sizeof(char*)*n);
		getchar();
		for(i = 0 ; i < n ; ++i)
		{
			nomes[i] = (char*) malloc(sizeof(char)*100);
			gets(nomes[i]);
		}
		for(i = 0 ; i < n - 1 ; ++i)
		{
			for(j = i + 1 ; j < n ; ++j)
			{
				if(strcmp(nomes[i], nomes[j]) == 1)
				{
					strcpy(aux, nomes[i]);
					strcpy(nomes[i], nomes[j]);
					strcpy(nomes[j], aux);
				}
			}
		}
		for(i = 0 ; i < n ; ++i) printf("%s\n", nomes[i]);
		scanf("%d", &n);
	}
	return 0;
}
