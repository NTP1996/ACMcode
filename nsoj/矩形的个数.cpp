#include <stdio.h>


int main()
{
	int n;
	scanf("%d",&n);
	getchar();
	while(n)
	{
		char c;
		c=getchar();
		if(c>='A'&&c<='Z')
		{
			printf("%c",c+32);
			continue;
		}
		if(c>='a'&&c<='z')
		{
			printf("%c",c-32);
			continue;
		}
		if(c=='\n')
		{
			printf("\n");
			n--;
		}	
	}
	return 0;
} 
