#include <stdio.h>
#include <stdlib.h>

typedef struct _estoque Estoque;
typedef struct _pedido Pedido;

struct _estoque
{
	int codigo;
	int quantidade;
};

struct _pedido
{
	int cliente;
	int codigo_prod;
	int quantidade_prod;
};

void realoca_memoria(Estoque* produto, int tam_est)
{
	produto = (Estoque*) realloc(produto, sizeof(Estoque)*tam_est);
}

int main ()
{
	int aux = 0, cod, quant, i, n = 0, tam_est = 5;
	Estoque* produto = (Estoque*) malloc(sizeof(Estoque)*tam_est);
	Pedido pedido;
	scanf("%d", &cod);
	while(cod != 9999)
	{
		scanf("%d", &quant);
		if(aux == (tam_est - 1)) realoca_memoria(produto, tam_est += 5);
		produto[aux].codigo = cod; produto[aux].quantidade = quant; ++aux;
		scanf("%d", &cod);
	}
	realoca_memoria(produto, (aux + 1));
	scanf("%d", &pedido.cliente);
	while(pedido.cliente != 9999)
	{
		scanf("%d%d", &pedido.codigo_prod, &pedido.quantidade_prod);
		for(i = 0 ; i < aux ; ++i)
		{
			if(pedido.codigo_prod == produto[i].codigo)
			{
				++n;
				break;
			}
		}
		if(n == 1)
		{
			if(produto[i].quantidade >= pedido.quantidade_prod)
			{
				printf("OK\n");
				produto[i].quantidade -= pedido.quantidade_prod;
			}else printf("ESTOQUE INSUFICIENTE\n");
		}else printf("ESTOQUE INSUFICIENTE\n");
		n = 0;
		scanf("%d", &pedido.cliente);
	}
	for(i = 0 ; i < aux ; ++i) printf("%d %d\n", produto[i].codigo, produto[i].quantidade);
	return 0;
}
