#include <iostream>
#include <queue>
#include <stdio.h>
using namespace std;
	struct point{
		int x;
		int y;
		int anc;
	};
	point begin;
	point end;
	
int a[9][9]={
			{1,1,1,1,1,1,1,1,1},
			{1,0,0,1,0,0,1,0,1},
			{1,0,0,1,1,0,0,0,1},
			{1,0,1,0,1,1,0,1,1},
			{1,0,0,0,0,1,0,0,1},
			{1,1,0,1,0,1,0,0,1},
			{1,1,0,1,0,1,0,0,1},
			{1,1,0,1,0,0,0,0,1},
			{1,1,1,1,1,1,1,1,1}
			};
			
int o[4][2]={{-1,0},{1,0},{0,-1},{0,1}};

int bfs()
{
		queue<point > q1;
		q1.push(begin);
		while(!q1.empty())
		{
			for(int i=0;i<4;i++)
			{
				point t;
				t=q1.front();
				if(t.x==end.x&&t.y==end.y)
				{
					printf("%d\n",t.anc);
					return 0;
				}
				if(t.x==0||t.y==0)
					continue;
				if(a[t.x+o[i][0]][t.y+o[i][1]]!=1)
				{
					point tt;
					tt.x=t.x+o[i][0];
					tt.y=t.y+o[i][1];
					tt.anc=t.anc+1;
					q1.push(tt);
				}
			}
			q1.pop();
		}
}
int main()
{	

	int n;
	cin>>n;
	while(n--)
	{
		cin>>begin.x>>begin.y;
		cin>>end.x>>end.y;
		begin.anc=0;
		bfs();
	}

	return 0;
	
}
 
