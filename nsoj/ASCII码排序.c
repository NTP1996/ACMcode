#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	getchar();
	while(n--)
	{
		char s[3];
		printf("n=%d\n",n);
		scanf("%s",s);
		getchar();
		printf("n=%d\n",n);
		sort(s,s+3);
		printf("%c %c %c",s[0],s[1],s[2]);
		if(n!=0)
			printf("\n");
	}
	return 0;
	
} 
