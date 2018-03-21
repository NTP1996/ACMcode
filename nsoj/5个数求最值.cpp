#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
	while(1)
	{
		int i;
	cin>>i;
	if(i==0)	return 0;
	if(i==pow(i/100,3)+pow(i/10%10,3)+pow(i%10,3))
		cout<<"Yes"<<endl;
	else
		cout<<"No"<<endl;
	}
	

	
}
