#include <iostream>
using namespace std;
int s[1010];
int main()
{

		
	int a,b;
	cin>>a>>b;
	if(b>0)
		for(int i=1;i<a+1;i++)
		{
			s[i]=1;
		}
				for(int i=2;i<b+1;i++)
				{
					for(int j=1;j<a+1;j++)
					{
						if(j%i==0)
							s[j]*=-1;
					}
					
				}
		for(int i=1;i<a+1;i++)
		{
			
			if(s[i]==1)
			{
				if(i!=1)
					cout<<" ";
				cout<<i;
			}
			
		}
		return 0;
		
		
	
}
