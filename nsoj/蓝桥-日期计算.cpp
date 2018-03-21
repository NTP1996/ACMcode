#include <stdio.h>
#include <iostream>
#include <set>
using namespace std;
struct node  
{  
    int a,b,c;  
    bool friend operator<(node x,node y)  
    {  
        if(x.a<y.a) return true;  
        if(x.a==y.a&&x.b<y.b) return true;  
        if(x.a==y.a&&x.b==y.b&&x.c<y.c) return true;  
        return false;  
    }  
};
set<node> ss;
int func(int year,int mon ,int day)
{
	if(mon==0||day==0||mon>12)	return 0;
	if(year>59)	year+=1900;
	else	year+=2000;
	if(mon>12)	return 0;
	int s[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	if(year%400==0||(year%4==0&&year%100!=0))	s[1]++;
	if(day>s[mon-1])	return 0;
	node n;
	n.a=year;
	n.b=mon;
	n.c=day;
	ss.insert(n);
} 
int main()
{	
	int a,b,c;
	scanf("%d/%d/%d",&a,&b,&c);

				func(c,b,a);	//日月年
				func(c,a,b);	//月日年 
				func(a,b,c);	//年月日
	for(set<node>::iterator it=ss.begin();it!=ss.end();it++)
	{
		printf("%d-%02d-%02d\n",(*it).a,(*it).b,(*it).c);
	}
	
	return 0; 
}
/*
04/02/29

2004-02-29
2029-02-04
2029-04-02
*/ 
