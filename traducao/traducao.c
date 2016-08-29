#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct _palavras Palavra;

struct _palavras
{
	char errada[15];
	char correta[15];
};

int main ()
{
	int a, b = 0, i, j, k, n, m, tam, tam_aux, menor = 15;
	char ini, fim;
	char frase[200], aux[15];
	Palavra *palavra;
	scanf("%d %d", &n, &m);
	while(n != 0 || m != 0)
	{
		palavra = (Palavra*) malloc(sizeof(Palavra) * n);
		for(i = 0 ; i < n ; ++i)
		{
			scanf("%s -> %s", palavra[i].errada, palavra[i].correta);
			if(strlen(palavra[i].errada) < menor) menor = strlen(palavra[i].errada);
		}
		getchar();
		for( ; m > 0 ; --m)
		{
			gets(frase);
			tam = strlen(frase);
			for(i = 0 ; i < tam - 1 ; ++i)
			{
				if(frase[i] != ' ')
				{
					a = 0;
					for(j = 0 ; j < tam && j < 15; ++j)
					{
						if(menor == 1)
						{
							for(k = 0 ; k < n ; ++k)
							{
								if(frase[i + j] == palavra[k].errada[0])
								{
									frase[i + j] = palavra[k].correta[0];
									break;
								}
							}
						}
						if(frase[i + j] != ' ')
						{
							aux[j] = frase[i + j];
							++a;
						}else{
							aux[j] = '\0';
							break;
						}
					}
					if(((int)aux[0] > 32 && (int)aux[0] < 48) || ((int)aux[0] > 57 && (int)aux[0] < 65) || ((int)aux[0] > 90 && (int)aux[0] < 97) || ((int)aux[0] > 122 && (int)aux[0] < 127))
					{
						ini = aux[0];
						for(k = 1 ; k < j ; ++k) aux[k - 1] = aux[k];
						aux[k - 1] = '\0';
						printf("%c", ini);
					}
					tam_aux = strlen(aux);
					if(((int)aux[tam_aux - 1] > 32 && (int)aux[tam_aux - 1] < 48) || ((int)aux[tam_aux - 1] > 57 && (int)aux[tam_aux - 1] < 65) || ((int)aux[tam_aux - 1] > 90 && (int)aux[tam_aux - 1] < 97) || ((int)aux[tam_aux - 1] > 122 && (int)aux[tam_aux - 1] < 127))
					{
						fim = aux[tam_aux - 1];
						aux[tam_aux - 1] = '\0';
						b = 1;
					}
					if(a > 0)
					{
						for(k = 0 ; k < n ; ++k)
						{
							if(strcmp(aux, palavra[k].errada) == 0)
							{
								printf("%s", palavra[k].correta);
								break;
							}
						}
						if(k == n) printf("%s", aux);
					}
					if(b == 1) printf("%c", fim);
					if((i + j) < (tam - 1)) printf(" ");
					else printf("\n");
					b = 0;
				}
				i += j;
			}
		}
		menor = 15;
		free(palavra);
		scanf("%d %d", &n, &m);
	}
	return 0;
}
