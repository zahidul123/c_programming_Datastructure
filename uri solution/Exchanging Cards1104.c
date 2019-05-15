#include<stdio.h>
int main()
{
    int alice[1000],betty[1000],alts,bets,count=0;
    while(1)
    {
        scanf("%d %d",&alts,&bets);
        if(alts==0&&bets==0)
        {
            break;
        }
        int alsinp[alts],betinp[bets],i,j=1;
        count=0;
        for(i=0; i<alts; i++)
        {
            scanf("%d",&alsinp[i]);
        }
        for(i=0; i<bets; i++)
        {
            scanf("%d",&betinp[i]);
        }
        alice[0]=alsinp[0];

        if(alsinp[0]==alsinp[1])
        {
            j=j-1;
        }

        for(i=2; i<alts; i++)
        {

            if(alsinp[i-1]==alsinp[i])
            {

            }
            else
            {
                alice[j]=alsinp[i];
                j++;
            }

        }
       for(i=0; i<j; i++)
        {
            printf("%d ",alice[i]);
        }
    }
}
