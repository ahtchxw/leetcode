#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a,b,i;
    int c=0,ans=0;
    while(scanf("%d%d",&a,&b)==2)
    {
        if(a==0&&b==0)
        {
            return;
        }
        for(i=9;i>=0;i--)
        {
            c=(a%10+b%10+c)>9?1:0;
            ans+=c;
            a/=10;
            b/=10;
        }
        printf("%d\n",ans);
    }
    return 0;
}
