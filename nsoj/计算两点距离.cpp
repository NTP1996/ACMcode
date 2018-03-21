#include <stdio.h>
#include <cmath>
using namespace std;
int main()
{
	double a,b;
	double c,d;
	while(~scanf("%lf %lf %lf %lf",&a,&b,&c,&d))
	{
	
		printf("%0.2lf\n",sqrt(  pow( ( a-c ),2 )+pow( (b-d) , 2 ))); 
	}
	return 0;
} 
