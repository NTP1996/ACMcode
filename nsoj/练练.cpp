#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	getchar();
	while(n--)
	{
		int i=0;
		int f[10001];
		char c='1';
		bool ff=true;
		while(c!='\n')
		{
			c=getchar();
		
			if(c=='[')
			{
				f[i++]=1;
				continue;
			}
			if(c=='(')
			{
				f[i++]=2;
				continue;
			}
			if(c==']'&&f[--i]!=1)
			{
				ff=false;
				while(c!='\n') c=getchar();
				break;
			}
			
			if(c==')'&&f[--i]!=2)
			{
				ff=false;
				while(c!='\n') c=getchar();
				break;
			}
		
			
		}
		if(ff)
			printf("Yes\n");
		else
			printf("No\n"); 
			
	}
	return 0;
}
