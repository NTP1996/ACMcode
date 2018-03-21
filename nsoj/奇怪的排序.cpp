#include <iostream>
#include <stdio.h>
using namespace std; 
int s[50],c[50];
int f(int a)
{
 int sum=0;
    while(a)
    {
        sum=sum*10+a%10;
        a=a/10;
    }
    return sum;

	
}
int main()
{
	int n;
	cin>>n;
	while(n--)
	{
		int a,b;
		cin>>a>>b;
		for(int i=a,index=0;i<=b;i++,index++)
		{
			c[index]=index;
			s[index]=f(i);
		}
		for(int i=0;i<b-a+1;i++)
		{
			
			for(int j=i+1;j<b-a+1;j++)
			{
				
				if(s[ c[i] ]>s[ c[j] ])
				{
					int t;
					t=c[i];
					c[i]=c[j];
					c[j]=t;
				}
			}
		
		}
		for(int i=0;i<b-a+1;i++)
		{	
			if(i!=0)
			cout<<" ";
			cout<<a+c[i];
			
		}
		
			cout<<endl;
	}
	return  0;
}
