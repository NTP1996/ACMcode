#include <iostream>
#include <stdio.h>
#include <queue>
#include <string.h>
using namespace std;
struct point {
	int x,y;
};
point begin;
int m,n;
int key[5];
int handkey[5];
int door[5];
int temp=0;
point doorpoint[5];
char map[20][20];
queue<point> s;
int x[4][2]={{-1,0},{1,0},{0,1},{0,-1}};
int bfs(point now)
{

}
int main()
{

	string s;
	while(scanf("%d %d",&m,&n)&&n&&m)
	{
			memset(key,0,sizeof(key));
			memset(handkey,0,sizeof(handkey));
			memset(door,0,sizeof(door));
		for(int j=0;j<m;j++)// 
		{
			cin>>s;
			for(int i=0;i<n;i++)
			{
				map[j][i]=s[i];
				if(s[i]>='a'&&s[i]<='e')//获得钥匙个数 
				{
					key[s[i]-'a']++;
				}
				if(s[i]=='G') //获得起点 
				{
				  	begin.x=j;
					begin.y=i;
				}
			}
		}
		while(1)
		{
			bfs(begin);
			for(int i=0;i<5;i++)
			{
				if(door[i]==1 &&key[i]==handkey[i] ) //是否可以打开门 
				{
					
					s.push(doorpoint[i]); 
					
				}
			}
			if(s.empty()|| temp==1)
			{
				break;
			} 
		}
		if(temp==1)
			printf("YES!");
		else
			printf("NO!");
/*
		for(int i=0;i<=5;i++)
		{
			cout<<"key"<<i<<"="<<key[i]<<endl;
		}
		for(int j=0;j<m;j++)
		{
			
			for(int i=0;i<n;i++)
			{
				cout<<map[j][i];
			}
			cout<<endl;
		}
*/	
	}
	return 0;
}
