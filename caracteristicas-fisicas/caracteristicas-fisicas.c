#include <stdio.h>

typedef struct _habitantes Habitantes;

struct _habitantes
{
	int idade;
	char sexo;
	char cor_dos_olhos;
	char cabelos;
};

int main ()
{
	int n, num_pess = 0, maior_idade = 0, pess_certa = 0;
	char aux[6];
	Habitantes pessoa;
	scanf("%d", &n);
	while(n != -1)
	{
		if(n > maior_idade) maior_idade = n;
		++num_pess;
		getchar();
		gets(aux);
		pessoa.sexo = aux[0];
		pessoa.cabelos = aux[2];
		pessoa.cor_dos_olhos = aux[4];
		if(pessoa.sexo == 'f' && pessoa.cabelos == 'l' && pessoa.cor_dos_olhos == 'v' && (n >= 18 && n <= 35)) ++pess_certa;
		scanf("%d", &n);
	}
	printf("Mais velho: %d\n", maior_idade);
	printf("Mulheres com olhos verdes, loiras com 18 a 35 anos: %.2f%%\n", (pess_certa / (float)num_pess)*100);
	return 0;
}
