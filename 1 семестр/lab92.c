#include<stdio.h>
#include<math.h>

void roots(int a, int b, int c)
{
	int d = pow(b,2)-4*a*c;
	if(a==0&&b==0&&c==0)
		printf("infinitely many solutions");
	else if(a==0&&d>0)
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
	else if(d==0&&a!=0)
	{
		double x=(-1*b)/((double)2*a);
		printf("x1 = %.3f\n",x);
	}
	else
	{
		printf("there are no roots");
	}
}

int main()
{
	int a,b,c;
	printf("input a: ");
	scanf("%i",&a);
	printf("input b: ");
	scanf("%i",&b);
	printf("input c: ");
	scanf("%i",&c);

	roots(a,b,c);
	return 0;
}