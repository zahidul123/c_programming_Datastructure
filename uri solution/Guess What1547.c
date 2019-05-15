#include<stdio.h>
#include<stdlib.h>
int main()
{
    int test,group,guesnum,i,j;
    while(1)
    {
        scanf("%d",&test);
        if(test==0)
        {
            break;
        }
        for(j=0; j<test; j++)
        {
            scanf("%d %d",&group,&guesnum);
            int gesmval,min=guesnum,indx=0,res=0;
            for(i=0; i<group; i++)
            {
                scanf("%d",&gesmval);
                res=abs(guesnum-gesmval);
                else if(min>res)
                {
                    min=res;
                    indx=i;
                }
            }
            printf("%d\n",indx+1);
        }
    }
}

