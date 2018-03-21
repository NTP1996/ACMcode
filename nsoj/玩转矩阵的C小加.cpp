#include <stdio.h>
#include <string>
#include <iostream>
using namespace std;
int main()
{
	int n;
	scanf("%d",&n);
	int a,b;
	while(n--)
	{
		int s[3][3];
		for(int i=0;i<3;i++)
		{
			for(int j=0;j<3;j++)
			{
				if(j==i)
				scanf("%d",&s[i][j]);
				else
				scanf("%d",&s[j][i]);
			}
		}
			for(int i=0;i<3;i++)
		{
			for(int j=0;j<3;j++)
			{
				printf("%d",s[i][j]);
				if(j!=2)
					cout<<" ";
			}
			if(i!=2)
			cout<<endl;
		}
	}
	return 0;
}
