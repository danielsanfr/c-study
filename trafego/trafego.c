#include <stdio.h>
#include <stdlib.h>

struct _trafego
{
	int caminho[4][4];
};

typedef struct _trafego Trafego;

int main()
{
	int o, d, t, i, j, k, ori_BH = 0, DF_PB = 0;
	Trafego tipo[3];
	for(k = 0 ; k < 3 ; ++k)
	{
		for(i = 0 ; i < 4 ; ++i)
		{
			for(j = 0 ; j < 4 ; ++j)
			{
				tipo[k].caminho[i][j] = 0;
			}
		}
	}
	scanf("%d %d %d", &o, &d, &t);
	while(o != 0 || d != 0 || t != 0)
	{
		++tipo[t - 1].caminho[o - 1][d - 1];
		if(o == 1) ++ori_BH;
		if(t == 3 && o == 4 && (d == 2 || d == 4)) ++DF_PB;
		scanf("%d %d %d", &o, &d, &t);
	}
	for(k = 0 ; k < 3 ; ++k)
	{
		if(k == 0) printf("Automovel:\n");
		else if(k == 1) printf("Caminhao:\n");
		else printf("Onibus:\n");
		for(i = 0 ; i < 4 ; ++i)
		{
			for(j = 0 ; j < 4 ; ++j)
			{
				printf("%d ", tipo[k].caminho[i][j]);
			}
			printf("\n");
		}
	}
	printf("Origem Belo Horizonte: %d\n", ori_BH);
	printf("Onibus: Brasilia - Petropolis ou Barbacena: %d\n", DF_PB);
	return 0;
}
