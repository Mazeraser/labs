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

	int t0=a*pow(0,2)+b*c;
	int t1=a*pow(1,2)+b*c;
	int t2=a*pow(2,2)+b*c;

	int d10=t1-t0;
	int d21=t2-t1;
	int dsq=d21-d10;

	printf("t0 =%i\n",t0);
	printf("t1 =%i\n",t1);
	printf("t2 =%i\n",t2);
	printf("det_10 = %i\n",d10);
	printf("det_21 = %i\n",d21);
	printf("det_square = %i\n",dsq);

	for(int i=3;i<101;i++)
	{
		int t = a*pow(i,2)+b*c;
		printf("t%i = %i\n",i,t);
	}
}