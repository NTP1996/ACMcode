#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	while(n--)
	{
		int  x;
		scanf("%d",&x);
		if(x>10)
		{
			x-=10;
			if(x%5==0)
			{
				printf("%d\n",x/5+1);
			}
			else
			{
				printf("%d\n",x/5+2);
			}
		} 
		else
		{
			printf("1\n");
		}
	}
} 
