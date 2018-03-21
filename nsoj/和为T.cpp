#include <stdio.h>
	long int s[23];
	long int q[23];
	long int f=0;
	long int n;
	long int  end;
	int max=0;
void dfs(int anc,long int sum)
{
	 if(anc>=n) 
			return ;
	if(sum==end && f!=0 || end==s[0] )
	{
		max++;
		int t=0;
		if(end==s[0])
			printf("%d",s[0]);
		else
			while(t<f)
			{
				printf("%d ",q[t++]);
			}
		printf("\n");
	
	}
	
	
		dfs(anc+1,sum);//不选择 
		q[f++]=s[anc];
		dfs(anc+1,sum+s[anc]); //选择此数
		f--;
		
			
	
	
}
int main()
{

	scanf("%ld",&n);

	for(int i=0;i<n;i++)
	{
		scanf("%ld",&s[i]); 
	}
	scanf("%ld",&end); 
		dfs(0,0);
		printf("%d",max);

	return 0;
} 
/* 
4
-1024 1024 -2 2
0 
*/
