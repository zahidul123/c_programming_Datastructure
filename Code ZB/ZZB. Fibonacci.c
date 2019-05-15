
#include<stdio.h>
int main()
{
    int nm,lp,del,tc,fc;
    long long int smz,sm,zl;
    scanf("%d",&tc);
    for(fc=1; fc<=tc; fc++)
    {
        del=1;
        scanf("%d",&nm);
        for(lp=1; lp<=nm; lp++)
        {
            if(lp==1||lp==2)
            {
                sm=1;
                zl=1;
                del=0;
                smz=1;
                continue;
            }
            smz=sm+zl;
            sm=zl;
            zl=smz;
        }
        if(del==0)
        {
            printf("%lld\n",smz);
        }
        else
        {
            printf("%lld\n",smz);
        }
    }
    return 0;
}
