#include <stdio.h>
int f(int x)
{
	if(x==12)
		return 1;
	else
	{
		int sum=0;
		sum+=f(x+1);
		sum+=f(x+1);
		printf("%d\n",sum);
		return sum;
	}
}
int main()
{
	printf("%d",f(1));
	return 0;
} 
