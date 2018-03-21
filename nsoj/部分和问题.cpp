#include <stdio.h>
#include <stdlib.h>
int *p;
void f(int n);
int main()
{
	int n;
	int sum;
	scanf("%d %d",&n,&sum);
	
	p=(int *)malloc(sizeof(int )*n);
	int i=0;
	for(;i<n;i++)
	{
		scanf("%d",&p[i]);
	}
} 
