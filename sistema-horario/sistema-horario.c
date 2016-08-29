#include <stdio.h>

int main ()
{
	int hr, min;
	scanf("%d%d", &hr, &min);
	if(hr == 24) printf("00\n%.2d\nam\n", min);
	else if(hr >= 00 && hr < 12) printf("%.2d\n%.2d\nam\n", hr, min);
	else if(hr >= 12 && hr < 24)
	{
		if(hr == 12) printf("%.2d\n%.2d\npm\n", hr, min);
		else printf("%.2d\n%.2d\npm\n", (hr - 12), min);
	}
	return 0;
}
