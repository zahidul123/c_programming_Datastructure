#include<stdio.h>
#include<math.h>
int main()
{
    int test,sum;
    int i,j,find=0;
    while(scanf("%d",&test)!=EOF)
    {
        find=0;
        for(i=1; i<=sqrt(test); i++)
        {
            for(j=1; j<=sqrt(test); j++)
            {
                sum=pow(i,2)+pow(j,2);
                if(sum==test)
                {
                    find=1;
                    break;
                }
            }

            if(find==1)
            {
                printf("YES\n");
                break;
            }
        }
        if(find==0)
        {
            printf("NO\n");
        }
    }
}
