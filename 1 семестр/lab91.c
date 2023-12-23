#include<stdio.h>

int fact_loop(int n)
{
	int res = 1;
	for(int i=2; i<=n;i++)
		res*=i;
	return res;
}
int fact_rec(int n)
{
	if(n>1)
		return n*fact_rec(n-1);
	else
		return 1;
}

int main()
{
	int n=6;
	int res_l = fact_loop(n);
	int res_r = fact_rec(n);
	printf("loop=%d\n",res_l);
	printf("rec=%d\n",res_r);
}