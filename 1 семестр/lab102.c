#include<stdio.h>
#include<math.h>
//переделать дискриминант
void roots(int a, int b, int c, double arr[3])
{
	int d = pow(b,2)-4*a*c;
	if(a==0)
	{
		double x=-c / (double)(b);
		arr[0]=(double)1;
		arr[1]=x;
	}
	else if(d>0)
	{
		double x1=(-1*b+pow(d,0.5f))/2*a;
		double x2=(-1*b-pow(d,0.5f))/2*a;

		arr[0]=(double)2;
		arr[1]=x1;
		arr[2]=x2;
	}
	else if(d==0)
	{
		double x=(-1*b)/((double)2*a);

		arr[0]=(double)1;
		arr[1]=x;
	}
	else if(d<0)
	{
		arr[0]=0;
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

	double arr[3];

	roots(a,b,c,arr);

	if(arr[0]>0)
	{
		printf("count of roots: %.0f\n",arr[0]);
		for(int i=1;i<=arr[0];i++)
		{
			printf("x%i=%.3f\n",i,arr[i]);
		}
	}
	else if(arr[0]==0)
	{
		printf("there are no roots");
	}
	return 0;
}