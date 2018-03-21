#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;
int main()
{
	int n;
	cin>>n;
	while(n--)
	{
		int a,b;
		cin>>a>>b;
		int *s;
		s=(int *)malloc(sizeof(int)*(a+1));
		for(int i=1;i<=a;i++)
			s[i]=0;
		int i=1,t=a,n=1;
		while(t!=1)
		{
			if(i==0) i++;
			if(n==b&&s[i]==0)
			{
				s[i]=1;
				n=1;
				t--;
			
			}
			if(s[i]==0)
				n++;
		
			i++;
			i=i%(a+1);
		
		}
		for(i=1;i<=a;i++)
		{
			if(s[i]==0)
				cout<<i<<endl;
		}
		
	}
	return 0;
}
