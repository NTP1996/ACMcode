#include <iostream>
#include <stdio.h>
#include <algorithm>
using namespace std;
int main()
{	int n; 
	int s[10001];
	while(~scanf("%d",&n)) 
	{
		int a=0,b=0;
		for(int i=0;i<n;i++)
		{
			scanf("%d",&s[i]);
		}	
		sort(s,s+n);		
		for(int i=n-1;i>=0;i--)
		{
		
			if(a>b)
			{
				b+=s[i];
			}
			else
			{
				
				a+=s[i];
			}
			
		}
		printf("%d\n",abs(a-b));
	}
	return 0;
}
 
