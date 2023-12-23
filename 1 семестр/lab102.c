#include<stdio.h>
#include<math.h>

void roots(int a, int b, int c, int arr[3])
{
	int d = pow(b,2)-4*a*c;
	if(d>0)
	{
		int x1=(-1*b+pow(d,0.5f))/2*a;
		int x2=(-1*b-pow(d,0.5f))/2*a;

		arr[0]=2;
		arr[1]=x1;
		arr[2]=x2;
	}
	else if(d==0)
	{
		int x=(-1*b)/2*a;

		arr[0]=1;
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

	int arr[3];

	roots(a,b,c,arr);

	if(arr[0]>0)
	{
		printf("count of roots: %i\n",arr[0]);
		for(int i=1;i<=arr[0];i++)
		{
			printf("x%i=%i",i,arr[i]);
		}
	}
	else if(arr[0]==0)
	{
		printf("there are no roots");
	}
	return 0;
}