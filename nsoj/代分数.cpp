#include <stdio.h>
int s[9]={1,2,3,4,5,6,7,8,9};
int t[9];
	float n;
	int sum=0;
void  dfs(int anc) //ÄæĞòÊı 
{
	if(anc==9)
	{
		
		float s1,s2,s3;
		int tt;
		for(int i=0;i<7;i++)
		{
			s1=s2=s3=0;
			 tt=0;
			while(tt<=i)
			{
				s1*=10;
				s1+=t[tt++];
			}
			if(s1>n)	break;
			for(int j=i+1;j<8;j++)
			{
				tt=i+1;
				while(tt<=j)
				{
					s2*=10;
					s2+=t[tt++];
				}
				while(tt<9)
				{
					s3*=10;
					s3+=t[tt++];
				}
				if(n==(s1+s2/s3))
					sum++;
				s2=s3=0;	
			}
			s1=0;
			
		}
		
		return ;
	}
	
	for(int i=0;i<9;i++)
	{
		if(s[i]!=0)
		{
			t[anc]=s[i];
			s[i]=0;
			dfs(anc+1);
			s[i]=i+1;	
		}
	
	}
}
int main()
{

	scanf("%f",&n);
	dfs(0);
	printf("%d",sum);
	return 0;
}
