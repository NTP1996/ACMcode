#include <stdio.h>
#include <iostream>
using namespace std;
long long f(int a,int b)
{
	long long  r1=1,x;
	b=a-b>b?b:a-b;
	x=b;
	for(int i=a;i>a-b;i--)
	{
		r1*=i;
	
		while(r1%x==0&&x>1)
		{
			r1/=x;
			x--;
		}
	}
	
	return r1; 
}
int main()
{
	int n;
	cin>>n;
	while(n--)
	{
		int a,b;
		cin>>a>>b;
	
		cout<<f(a,b)<<endl;
	}
	return 0;
} 
