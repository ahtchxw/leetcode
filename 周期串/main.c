#include <stdio.h>
#include <string.h>

int main()
{
    int i,j,ok;
    char word[100];
    scanf("%s",word);
    int len = strlen(word);
    for(i=1;i<=len;i++)
    {
        if(len%i==0)
        {
            for(j=i;j<len;j++)
            {
                ok = 1;
                if(word[j]!=word[j%i])
                {
                    ok=0;
                    break;
                }
            }
            if(ok==1)
            {
                printf("%d",i);
                break;
            }
        }
    }
    return 0;
}
