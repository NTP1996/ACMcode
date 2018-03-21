#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	while(n--)
	{
		int a,b;
		scanf("%d %d",&a,&b);
		if(b>=2*a&&b<=4*a&&(b-2*a)%2==0)
		{
			printf("%d %d",a-(b-2*a)/2,(b-2*a)/2);
		}
		
		else
			printf("No answer");
		if(n!=0)
			printf("\n");

	}
	return 0;
} 
