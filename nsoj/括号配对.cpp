#include <stdio.h>  
#include <string.h>  
char s[100],top[10005];  
int main (void)  
{  
   // freopen("ÌâÄ¿2.txt","r",stdin);  
    int i,j,n,ok,len,k;  
    while(scanf("%d",&n)!=EOF)  
    {  
        for(i=1;i<=n;i++)  
        {  
            j=0;  
            ok=1;  
           scanf("%s",s);  
           len=strlen(s);  
           if(len%2)   
           {  
               printf("No\n");  
               continue;  
           }  
           top[0]=s[0];  
           k=1;  
            for(j=1;j<len;j++)  
            {  
               if(s[j]=='('||s[j]=='[') top[k++]=s[j];  
               else if((s[j]==']'&&top[k-1]=='[')||(s[j]==')'&&top[k-1]=='('))  
                k--;  
               else ok=0;  
            }  
            if(ok) printf("Yes\n");  
            else printf("No\n");  
        }  
    }  
    return 0;  
}  
