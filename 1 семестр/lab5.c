#include<stdio.h>
#include<math.h>

int main()
{
	int a,b,c;
	printf("input a: ");
	scanf("%i",&a);
	printf("input b: ");
	scanf("%i",&b);
	printf("input c: ");
	scanf("%i",&c);

	int d = pow(b,2)-4*a*c;
	if(a==0)
	{
		double x=-c / (double)(b);
		printf("x1 = %.3f\n",x);
	}
	else if(d>0)
	{
		double x1=(-1*b+pow(d,0.5f))/2*a;
		double x2=(-1*b-pow(d,0.5f))/2*a;
		printf("x1 = %.3f\n",x1);
		printf("x2 = %.3f\n",x2);
	}
	else if(d==0)
	{
		double x=(-1*b)/((double)2*a);
		printf("x1 = %.3f\n",x);
	}
	else if(d<0)
	{
		printf("there are no roots");
	}
}