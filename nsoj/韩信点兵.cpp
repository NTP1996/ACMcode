#include <iostream>
#include <algorithm>
using namespace std;
int main() 
{
	int a,b,c;
	int i;
	cin>>a>>b>>c;
	for( i=10;i<101;i++)
	{
		if(i%3==a&&i%5==b&&i%7==c)
			
			{
				cout<<i;
				break;
			}
	}
	if(i==101)	cout<<"No answer";
	return 0;
		 
}
