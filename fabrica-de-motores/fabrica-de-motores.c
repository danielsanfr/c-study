#include <stdio.h>

int main()
{
	int i;
	double m0[12], m1[12], m0_custo, m0_lucro, m0_custot = 0, m0_lucrot = 0, m1_custo, m1_lucro, m1_custot = 0, m1_lucrot = 0;
	for(i = 0 ; i < 12 ; ++i) scanf("%lf %lf", &m0[i], &m1[i]);
	scanf("%lf %lf", &m0_custo, &m0_lucro);
	scanf("%lf %lf", &m1_custo, &m1_lucro);
	for(i = 0 ; i < 12 ; ++i)
	{
		printf("Motor[0], Mes[%d], custo=[%.2lf], lucro=[%.2lf]\n", (i + 1), (m0[i] * m0_custo), (m0[i] * m0_lucro));
		m0_custot += (m0[i] * m0_custo);
		m0_lucrot += (m0[i] * m0_lucro);
	}
	for(i = 0 ; i < 12 ; ++i)
	{
		printf("Motor[1], Mes[%d], custo=[%.2lf], lucro=[%.2lf]\n", (i + 1), (m1[i] * m1_custo), (m1[i] * m1_lucro));
		m1_custot += (m1[i] * m1_custo);
		m1_lucrot += (m1[i] * m1_lucro);
	}
	printf("Motor[0], anual, custo=[%.2lf], lucro=[%.2lf]\n", m0_custot, m0_lucrot);
	printf("Motor[1], anual, custo=[%.2lf], lucro=[%.2lf]\n", m1_custot, m1_lucrot);
	return 0;
}
