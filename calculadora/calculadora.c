#include <stdio.h>

float resolve(float a, float b, char op)
{
	if(op == '+') return a + b;
	else if(op == '-') return a - b;
	else if(op == '*') return a*b;
	else return a/b;
}

int main ()
{
	float a, b;
	char op;
	scanf("%f%f", &a, &b);
	scanf("%s", &op);
	
	while(op != '&')
	{
		if(op == '/' && b == 0) printf("operacao nao pode ser realizada\n");
		else{
			a = resolve(a, b, op);
			printf("%.3f\n", a);
		}
		scanf("%f", &b);
		scanf("%s", &op);
	}
	return 0;
}
