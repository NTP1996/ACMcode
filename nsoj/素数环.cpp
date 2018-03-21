#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <cstring>
#inlucde <cmath>
int s[21];
int t[21];
int a;
bool isp(int n)
{
	if(n==2||n==3)	return true;
	if(n%2==0)	return false;
	for(int i=3;i<sqrt(n)+2;i+=2)
	{
		if(n%3==0)	return false;
	}
	return true;
}

void f(int n)
{
	if(n==a)
	{
		
	}
	else
	{
		for(int i=1;i<=a;i++)
		{
			if(s[i]!=-1)
			{
				t[n]=s[i];
				s[i]=-1;
				f(n+1);
				s[i]=i;
			} 
		}
	}
}
int main()
{
	
		for(int i=0;i<21;i++)
			s[i]=i;
	while(1)
	{
		
		cin>>a;
		if(a==0)	break;
	
		
		
	}
}
