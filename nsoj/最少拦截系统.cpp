#include <iostream>
#include <string>
using namespace std;
int main(){
	string s1;
	string s2;
	cin>>s1>>s2;
	int sum=0;
	for(int i=0;i<s1.size();i++)
	{
		if(s1[i]=='T'&&s2[i]=='A')
				continue;
		if(s1[i]=='A'&&s2[i]=='T')
				continue;
		if(s1[i]=='C'&&s2[i]=='G')
				continue;
		if(s1[i]=='G'&&s2[i]=='C')
				continue;
		sum++; 
	}
	cout<<sum;
	return 0;
}

