#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
bool is(int n)
{
	if(n==2)return true;
	if(n%2==0||n==1
	) return false;
	for(int i=3;i<sqrt(n)+1;i++)
	{
		if(n%i==0)
		{
			return false;
		}
	}
	return true;
} 
int main() 
{
	int n;
	cin>>n;
	while(n--)
	{
		int c,sum=0;
		cin>>c;
		for(int i=0;i<c;i++)
		{
			int t;
			cin>>t;
			if(is(t))
			{
				sum+=t;
			}
		}
		cout<<sum<<endl;
	}
	
	return 0;
		 
}
