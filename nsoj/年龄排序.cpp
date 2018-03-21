#include <iostream>
#include <string.h>
using namespace std;
int main()
{
	int age[151];
	int n;
	memset(age,0,sizeof(age));
	cin>>n;
	while(n--)
		{
			int x;
			cin>>x;
			age[x]++;
		}
		n=0;
		while(n<151)
		{
			while(age[n]!=0)
			{
				cout<<n<<" ";
				age[n]--;
			}
			n++;
		}
		
		return 0;
		
	
} 
