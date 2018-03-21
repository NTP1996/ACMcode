#include <stdio.h>


int main()
{
	int n;
	scanf("%d",&n);
	int i=3;
	int s[21]={0,1,1};
		for	(;i<=20;i++)
		{
			s[i]=s[i-1]+s[i-2];
		}
	while(n--)
	{
		int c;
		scanf("%d",&c);
		printf("%d\n",s[c]);
	
	}
	return 0;
} 
