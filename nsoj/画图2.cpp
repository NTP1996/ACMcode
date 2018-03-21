#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	while(n--)
	{
		int i;
		scanf("%d",&i);
		for(;i>0;i--)
		{
			for(int j=i;j>0;j--)
			{
				printf("*");
			}
			printf("\n");
		}
		
	}
	return 0;
} 
