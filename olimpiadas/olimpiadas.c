#include <stdio.h>
#include <stdlib.h>

struct _pais
{
	int ident;
	int medalha[3];
};

typedef struct _pais Pais;

void ordena_ident(Pais* pais, int ini, int fim)
{
	int i, j;
	Pais aux;
	for(i = ini ; i < (fim - 1) ; ++i)
	{
		for(j = i + 1 ; j < fim ; ++j)
		{
			if(pais[i].ident > pais[j].ident)
			{
				aux = pais[i];
				pais[i] = pais[j];
				pais[j] = aux;
			}
		}
	}
}

void ordena(Pais* pais, int ini, int fim, int med)
{
	int i, j;
	Pais aux;
	for(i = ini ; i < (fim - 1) ; ++i)
	{
		for(j = i + 1 ; j < fim ; ++j)
		{
			if(pais[i].medalha[med] < pais[j].medalha[med])
			{
				aux = pais[i];
				pais[i] = pais[j];
				pais[j] = aux;
			}
		}
	}
}

int main ()
{
	int aux1, aux2, aux3, aux4, i, ii, iii, j, jj, jjj, n, m, ini, fim;
	int o, p, b;
	Pais* pais;
	scanf("%d %d", &n, &m);
	pais = (Pais*) malloc(sizeof(Pais)*n);
	for(i = 0 ; i < n ; ++i)
	{
		pais[i].ident = 0;
		pais[i].ident = i + 1;
		pais[i].medalha[0] = 0;
		pais[i].medalha[1] = 0;
		pais[i].medalha[2] = 0;
	}
	for(i = 0 ; i < m ; ++i)
	{
		scanf("%d %d %d", &o, &p, &b);
		++pais[o - 1].medalha[0];
		++pais[p - 1].medalha[1];
		++pais[b - 1].medalha[2];
	}
	ini = 0 ; fim = n;
	ordena(pais, ini, fim, 0);
	for(i = 0 ; i < n - 1; ++i)
	{
		if(pais[i].medalha[0] == pais[i + 1].medalha[0])
		{
			ini = i ; fim = i;
			for(j = i + 1 ; j < n ; ++j)
			{
				if(pais[i].medalha[0] == pais[j].medalha[0]) fim = j;
				else break;
			}
			ordena(pais, ini, (fim + 1), 1);
			aux1 = ini ; aux2 = fim;
			for(ii = aux1 ; ii < aux2 ; ++ii)
			{
				if(pais[ii].medalha[1] == pais[ii + 1].medalha[1])
				{
					ini = ii ; fim = ii;
					for(jj = ii + 1 ; jj <= aux2 ; ++jj)
					{
						if(pais[ii].medalha[1] == pais[jj].medalha[1]) fim = jj;
						else break;
					}
					ordena(pais, ini, (fim + 1), 2);
					aux3 = ini ; aux4 = fim;
					for(iii = aux3 ; iii < aux4 ; ++iii)
					{
						if(pais[iii].medalha[2] == pais[iii + 1].medalha[2])
						{
							ini = iii ; fim = iii;
							for(jjj = ii + 1; jjj <= aux4 ; ++jjj)
							{
								if(pais[iii].medalha[2] == pais[jjj].medalha[2]) fim = jjj;
								else break;
							}
							ordena_ident(pais, ini, (fim + 1));
						}
					}
				}
			}
		}
	}
	for(i = 0 ; i < n ; ++i) printf("%d\n", pais[i].ident);
	return 0;
}
