#include<stdio.h>
int main()
{
    int test,home1,home2,away1,away2,i,res1,res2;
    while(scanf("%d",&test)!=EOF)
    {
        for(i=0; i<test; i++)
        {
            scanf("%d x %d",&home1,&away2);
            scanf("%d x %d",&home2,&away1);
            res1=home1+away1;
            res2=home2+away2;
            if(res1>res2)
            {
                printf("Time 1\n");
            }
            else if(res1<res2)
            {
                printf("Time 2\n");
            }
            else if(res1==res2)
            {
                if(home1==home2&&away1==away2)
                {
                    printf("Penaltis\n");
                }
                else  if(away1>away2)
                {
                    printf("Time 1\n");
                }
                else  if(away1<away2)
                {
                    printf("Time 2\n");
                }
            }
        }
    }
}
