#include <stdio.h> 
#include <stdlib.h>
#include <string.h>

	struct box
	{
		int a;
		int b;
		int c;
	}s[1001];
swap2(int *a,int *b)
{
	int t;
	t=*a;
	*a=*b;
	*b=t;
}
	swap(struct  box *a,struct box *b)
	{
	struct	box t;
		t=*a;
		*a=*b;
		*b=t;
	}
 int main()
{
	int n;
	scanf("%d",&n);
	while(n--)
	{
		int max;
		int i=0;
		scanf("%d",&max);
		for(i=0;i<max;i++)
		{
			scanf("%d %d %d",&s[i].a,&s[i].b,&s[i].c);
			if(s[i].b<s[i].c)
				swap(&s[i].b,&s[i].c);
		}
		int j;
		for( i=0;i<max;i++)
		{
			for(j=i+1;j<max;j++)
			{
				if(s[i].a<=s[j].a)  
				{
					if(s[i].b<=s[j].b)
					{
						if(s[i].c<=s[j].c)
						{
							if(s[i].a==s[j].a&&s[i].b==s[j].b&&s[i].c==s[j].c)
							{
								s[i].a=-1;
							
							}
								continue;
						}
					}
				}
				
					swap(&s[i],&s[j]);
				
			}
		}
		for(i=0;i<max;i++)
		{
			if(s[i].a!=-1)
			printf("%d %d %d\n",s[i].a,s[i].b,s[i].c);
		}
	}
	
	return 0;
}
