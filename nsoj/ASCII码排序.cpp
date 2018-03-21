#include <stdio.h>
#include <algorithm>

using namespace std;
int main()
{
	int n;
	scanf("%d",&n);
	getchar();
	while(n--)
	{
		char s[3];
		scanf("%s",s);
		sort(s,s+3);
		printf("%c %c %c\n",s[0],s[1],s[2]);
	
	}
	return 0;
	
} 
