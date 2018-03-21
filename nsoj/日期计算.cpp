#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
int f2(int n)
{
	if( (n%4==0&&n%100!=0)||n%400==0)
		return 1;
	else
		return 0;
}
int s[12]={31,28,31,30,31,30,31,31,30,31,30,31};
int f1(int n,int y)
{
	int sum=0;
	for(int i=0;i<n-1;i++)
	{
		sum+=s[i];
		if(i==2)
			sum+=f2(y);
	}
	
	return sum;
}

int main()
{
	int n;
	cin>>n;
	while(n--)
	{
		int y,m,d;
		cin>>y>>m>>d;
		cout<<f1(m,y)+d;
		if(n!=0)
			cout<<endl; 
	}
	return 0;
	
	
}
