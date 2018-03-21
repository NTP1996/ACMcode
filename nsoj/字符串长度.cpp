#include <stdio.h>
#include <string.h>
int main()
{
	char s[51];
	char max[51];
	int max1;
	scanf("%s",s);

	max1=strlen(s);
	strcpy(max,s);
	while(1)
	{
		scanf("%s",s);
		char c;
		c=getchar();
		if(max1<strlen(s))
		{
			strcpy(max,s);
			max1=strlen(s);
		}
		if(c=='\n')	break;
	} 
	printf("%s\n",max);
	return 0;
} 
