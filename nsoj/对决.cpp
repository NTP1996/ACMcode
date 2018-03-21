
#include <stdio.h>
int n,k,flag;

void fun()
{
	for(int i=1,j;i<n;i++)
	{
		j=n-i;
		if(i*j==k)
		{
			flag=0;
			return ;
		}
	}
}

int main()
{
	while(scanf("%d  %d",&n,&k) && n && k)
	{
		flag=1;
		fun();
		if(flag)
			printf("NO\n");
		else
			printf("YES\n");
	}
	return 0;
}
