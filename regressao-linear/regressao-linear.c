#include<stdio.h>
#include<math.h>
int main()
{
int i,n=1,x=0,y=0;
float Sx=0,Sy=0,Sxy=0,Sxx=0,Syy=0,a=0,b=0,r=0;
scanf("%d",&n);
while(n!=0)
{
	for(i=0;i<n;++i)
	{
		scanf("%d %d\n",&x,&y);
		Sx = Sx + x;
		Sy = Sy + y;
		Sxy = Sxy + (x*y);
		Sxx = Sxx + (x*x);
		Syy = Syy + (y*y);
	}
	a = (n*Sxy - Sx*Sy)/(n*Sxx - Sx*Sx);
	b = (Sy*Sxx - Sx*Sxy)/(n*Sxx - (Sx*Sx));
	r = (n*Sxy - Sx*Sy)/(sqrt(n*Sxx - (Sx*Sx))*sqrt(n*Syy - (Sy*Sy)));
	printf("a = %.2f, b = %.2f, R = %.2f\n",a,b,r);
	Sx = 0;
	Sy = 0;
	Sxy = 0;
	Sxx = 0;
	Syy = 0;
	scanf("%d",&n);
}
return 0;
}
