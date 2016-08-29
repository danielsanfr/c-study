#include <stdio.h>
#include <string.h>

int main ()
{
	int aux = 0, i, tam;
	char dig, valor[100];
	scanf("%c ", &dig);
	gets(valor);
	
	while(dig != '0' && valor[0] != '0')
	{
		tam = strlen (valor);
		for(i = 0 ; i < tam ; ++i)
		{
			if(valor[i] == dig || valor[i] == '0') continue;
			else
			{
				printf("%c", valor[i]);
				++aux;
			}
		}
		if(aux == 0) printf("0");
		aux = 0;
		printf("\n");
		scanf("%c ", &dig);
		gets(valor);
	}
	return 0;
}
