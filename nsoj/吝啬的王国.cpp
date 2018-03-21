
#include <stdio.h>
#include <stdlib.h>

struct node{
	int numb;
	struct node *next;
};

struct node *ins(struct node *root,int item)
{
	struct node *p,*p1;
	p=root;
	
	while(p->next!=NULL)
		p=p->next;
		
	p1=(struct node *)malloc(sizeof(struct node));
	p1->numb=item;
	p1->next=NULL;
	p->next=p1;
	
	return root;
}

void select(struct node **root,int s,int map[])
{
	struct node *p;
	p=root[s];
	while(p!=NULL)
	{
		if(map[p->numb]!=0)		//说明有值跳过 
		{
			p=p->next;
			continue;
		}
		map[p->numb]=s;
		select(root,p->numb,map);
		p=p->next;
	}
}


int main()
{
	struct node **root;
	int n,N,S,a,b,*map;
	scanf("%d",&n);
	while(n--)
	{
		scanf("%d %d",&N,&S);
		root=(struct node **)malloc(sizeof(struct node*) * N+1);
		map=(int *)malloc(sizeof(int ) * N+1);
		
		for(int i=1;i<N+1;i++)
		{
			root[i]=(struct node *)malloc(sizeof(struct node));
			root[i]->next=NULL;
			root[i]->numb=i;
			map[i]=0;
		}
		
		for(int i=0;i<N-1;i++)
		{
			scanf("%d %d",&a,&b);
			root[a]=ins(root[a],b);
			root[b]=ins(root[b],a);
		}

		map[S]=-1;
		select(root,S,map); 
		for(int i=1;i<N+1;i++)
			printf("%d ",map[i]);
		printf("\n");
	}
	return 0;
}

