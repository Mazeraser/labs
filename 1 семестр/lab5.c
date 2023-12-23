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
	if(d>0)
	{
		int x1=(-1*b+pow(d,0.5f))/2*a;
		int x2=(-1*b-pow(d,0.5f))/2*a;
		printf("x1 = %i\n",x1);
		printf("x2 = %i\n",x2);
	}
	else if(d==0)
	{
		int x=(-1*b)/2*a;
		printf("x1 = %i\n",x);
	}
	else if(d<0)
	{
		printf("there are no roots");
	}
}