#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int b = 0, e = 0, i, j, k, tam;
	char *senha, *chute, *aux;
	int *aux_senha;
	scanf("%d", &k);
	for( ; k > 0 ; --k)
	{
		scanf("%d", &tam);
		senha = (char*) malloc(sizeof(char)*tam);
		chute = (char*) malloc(sizeof(char)*tam);
		aux = (char*) malloc(sizeof(char)*tam);
		aux_senha = (int*) malloc(sizeof(int)*tam);
		for(i = 0 ; i < tam ; ++i)
		{
			aux[i] = '0';
			aux_senha[i] = 0;
		}
		aux[tam] = '\0';
		getchar();
		scanf("%s", senha);
		senha[tam] = '\0';
		while(strcmp(senha, chute) != 0)
		{
			scanf("%s", chute);
			chute[tam] = '\0';
			if(strcmp(aux, chute) == 0) break;
			for(i = 0 ; i < tam ; ++i)
			{
				if(chute[i] == senha[i])
				{
					++e;
					aux_senha[i] = 1;
				}
			}
			for(i = 0 ; i < tam ; ++i)
			{
				if(chute[i] != senha[i])
				{
					for(j = 0 ; j < tam ; ++j)
					{
						if(chute[i] == senha[j] && aux_senha[j] == 0)
						{
							++b;
							break;
						}
					}
				}
			}
			printf("(%d,%d)\n", e, b);
			e = 0 ; b = 0;
			for(i = 0 ; i < tam ; ++i) aux_senha[i] = 0;
		}
		free(senha) ; free(chute) ; free(aux) ; free(aux_senha);
	}	
	return 0;
}
