#include <stdio.h>
#include <string>
#include <iostream>
using namespace std;
int main()
{
	int n;
	scanf("%d",&n);
	while(n--)
	{
		string s;
		cin>>s;
		cout<<s;
		if(n!=0)
			cout<<endl;
	}
	return 0;
}
