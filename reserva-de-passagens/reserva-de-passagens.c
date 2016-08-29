#include <stdio.h>

struct _voo
{
    int num;
    int quant_vag;
};

struct _reserva
{
	int ident;
	int num_voo;
};

typedef struct _voo Voo;
typedef struct _reserva Reserva;

int main ()
{
	int aux = 0, i;
	Reserva cliente;
    Voo aviao[37];
    for(i = 0 ; i < 37 ; ++i) scanf("%d %d", &aviao[i].num, &aviao[i].quant_vag);
    scanf("%d %d", &cliente.ident, &cliente.num_voo);
    while(cliente.ident != 9999)
    {
		for(i = 0 ; i < 37 ; ++i)
		{
			if(cliente.num_voo == aviao[i].num)
			{
				if(aviao[i].quant_vag > 0)
				{
					printf("%d\n", cliente.ident);
					--aviao[i].quant_vag;
				}else printf("INDISPONIVEL\n");
				aux = 1;
			}
		}
		if(aux != 1) printf("INDISPONIVEL\n");
		aux = 0;
		scanf("%d %d", &cliente.ident, &cliente.num_voo);
	}
    return 0;
}
