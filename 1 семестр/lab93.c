#include<stdio.h>

int stack_overflow()
{
	return stack_overflow();
}
int main()
{
	printf("%d",stack_overflow());
	printf("Hello, world!");
}