#include <stdio.h> 
int f(int n,int a)
{
	if(n==5)
	{
		printf("%d",a);
	} 
	else
	return f(n+1,a+2);
}
int main()
{
	f(1,10);
	return 0;
}
