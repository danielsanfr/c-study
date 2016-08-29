#include <stdio.h>

int main ()
{
	int aux_x, aux_o, i, j ,jj = 0, num_jogos, cont_x = 0, cont_o = 0;
	int jogo[3][3];
	char aux[5];
	scanf("%d", &num_jogos);
	getchar();
	for( ; num_jogos > 0 ; --num_jogos)
	{
		for(i = 0 ; i < 3 ; ++i)
		{
			gets(aux);
			for(j = 0 ; j <= 5 ; j = j + 2)
			{
				jogo[i][jj] = (int)aux[j];
				++jj;
			}
			jj = 0;
		}
		for(i = 0 ; i < 3 ; ++i)
		{
			for(j = 0 ; j < 3 ; ++j)
			{
				if(jogo[i][j] == (int)'X') ++cont_x;
				if(jogo[i][j] == (int)'O') ++cont_o;
			}
			if(cont_x == 3) aux_x = 3;
			if(cont_o == 3) aux_o = 3;
			cont_x = 0; cont_o = 0;
		}
		if(aux_x == 3) cont_x = 3;
		if(aux_o == 3) cont_o = 3;
		if(cont_x != 3 && cont_o != 3)
		{
			for(i = 0 ; i < 3 ; ++i)
			{
				if(jogo[i][i] == (int)'X') ++cont_x;
				if(jogo[i][i] == (int)'O') ++cont_o;
			}
			if(cont_x != 3 && cont_o != 3)
			{
				cont_x = 0; cont_o = 0;
			}
		}
		if(cont_x != 3 && cont_o != 3)
		{
			j = 2;
			for(i = 0 ; i < 3 ; ++i)
			{
				if(jogo[i][j] == (int)'X') ++cont_x;
				if(jogo[i][j] == (int)'O') ++cont_o;
				--j;
			}
			if(cont_x != 3 && cont_o != 3)
			{
				cont_x = 0; cont_o = 0;
			}
			j = 0;
		}
		if(cont_x == cont_o) printf("ILEGAL\n");
		else if(cont_x == 3) printf("X_VENCEU\n");
		else if(cont_o == 3) printf("O_VENCEU\n");
		else printf("EM_ANDAMENTO\n");
		cont_x = 0; cont_o = 0;
	}
	return 0;
}
