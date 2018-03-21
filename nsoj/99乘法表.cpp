	#include <iostream>
	using namespace std;
	int s[1010];
	int main()
	{
	
			
		int a,b;
		cin>>a;
		while(a--)
		{cin>>b;
			for(int i=1;i<=b;i++)
			{
				for(int j=i;j<=9;j++)
				{
					if(j!=i)
						cout<<" ";
					cout<<i<<"*"<<j<<"="<<i*j; 
				}
				cout<<endl;
			}
			cout<<endl;
		}
		return 0;
			
		
	}
