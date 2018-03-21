#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	while(n--)
	{
		char s[8];
		int f=0;
		int i=1;
		scanf("%s",s);
		while(s[i]!='\0')
		{
			if(s[i]!='0')
			{		
					printf("%s",&s[i]); 
					f=1;
					break;
			}
			i++;
		}
		if(f==0)
			printf("0\n");
		else	
			printf("\n");
	}
	return 0;
}
