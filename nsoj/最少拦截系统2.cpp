#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
using namespace std;
int dp[100010];
int a[100010];
int n;
int main()
{
    while(~scanf("%d",&n))
    {
        memset(dp,0,sizeof(dp));
        dp[1]=1;
        for(int i=1;i<=n;i++)
        {
            scanf("%d",&a[i]);
        }
        int mmax;
        int ans=1;
        for(int i=2;i<=n;i++)
        {
            mmax=1;
            for(int j=1;j<i;j++)
            {
                if(a[j]<a[i])
                {
                    mmax=max(mmax,dp[j]+1);
                }
            }
            dp[i]=mmax;
            ans=max(ans,dp[i]);
        }
        printf("%d\n",ans);
    }
    return 0;
}
