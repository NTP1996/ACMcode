#include <stdio.h> 
int f(int n,int a)
{
	if(n==30)
	{
		printf("%d",a);
	} 
	else
	return f(n+1,(a+1)*2);
}
int main()
{
	f(1,1);
	return 0;
}
