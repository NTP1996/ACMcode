#include <stdio.h>
int s[20];
int main()
{
	int n;
	scanf("%d",&n);
	int index=0;
	while(n)
	{
		if(n%26==0)
		{
			s[index++]=26+'A';
			n/=26;
			n--;
		} 
		else
		{
			s[index++]=n%26+'A';
			n/=26;
		}
	}
	index--;
	while(index>=0)
		printf("%c",s[index--]-1);
	return 0;
	
}
