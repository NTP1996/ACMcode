#include <stdio.h>
int main()
{
	int n;
	int s[10001]={0,};

	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&s[i]);
	}
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(s[i]>s[j])
			{
				int t;
				t=s[i];
				s[i]=s[j];
				s[j]=t;
			}
			if(s[i]==s[j])
			{
				j++;
				n--;
			}
		} 
	}
	return 0;
}
