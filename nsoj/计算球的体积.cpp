#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <cmath>
using namespace std;
const float pi=3.1415926;
int main()
{
	float r;	
	while(~scanf("%f",&r))
	{
		int v;
		v=((float)4/3)*pi*pow(r,3);
		cout<<v
		if(v-(int)v>=0.5)
		{
			cout<<(int)v+1<<endl;
		}
		else
			cout<<(int)v<<endl; 
	}	
	return 0;
}
