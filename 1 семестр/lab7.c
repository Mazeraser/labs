#include<stdio.h>
#include<math.h>

int main()
{
	int w,h;
	printf("enter w: ");
	scanf("%i",&w);
	printf("enter h: ");
	scanf("%i",&h);

	for(int i=0;i<h;i++)
	{
		for(int j=0;j<w;j++)
		{
			if((j+i)%2==0)
				printf("#");
			else
				printf("_");
		}
		printf("\n");
	}
}