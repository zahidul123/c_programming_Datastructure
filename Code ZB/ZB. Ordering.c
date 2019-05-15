
#include <stdio.h>
int main()
{
    int ak[1000],km,Tc,rn,i,bj,sm,cc=0;
    scanf("%d",&Tc);
    for(km=1; km<=Tc; km++)
    {
        scanf("%d",&rn);
        for (i = 1; i <= rn; i++)
            scanf("%d", &ak[i]);
        for (i = 1 ; i <= rn; i++)
        {
            for (bj = 1 ; bj < rn; bj++)
            {
                if (ak[bj] < ak[bj+1])
                {
                    sm = ak[bj];
                    ak[bj] = ak[bj+1];
                    ak[bj+1] = sm;
                }
            }
        }
        for ( i = 1 ; i <= rn ; i++ )
        {
            if(ak[i] % 5 == 0)
            {
                cc++;
                if(cc==rn)
                    printf("%d\n", ak[i]);
                else
                    printf("%d ", ak[i]);
            }
        }
        for ( i = 1 ; i <= rn ; i++ )
        {
            if((ak[i] % 3 == 0) && (ak[i] % 5 != 0))
            {
                cc++;
                if(cc==rn)
                    printf("%d\n", ak[i]);
                else
                    printf("%d ", ak[i]);
            }
        }
        for ( i = 1 ; i <= rn ; i++ )
        {
            if((ak[i] % 2 == 0) && (ak[i]%5 != 0) && (ak[i]%3 != 0))
            {
                cc++;
                if(cc==rn)
                    printf("%d\n", ak[i]);
                else
                    printf("%d ", ak[i]);
            }
        }
        for ( i = 1 ; i <= rn ; i++ )
        {
            if((ak[i]%5 != 0) && (ak[i]%3 != 0) && (ak[i]%2 != 0))
            {
                cc++;
                if(cc==rn)
                    printf("%d\n", ak[i]);
                else
                    printf("%d ", ak[i]);
            }
        }
        cc=0;
    }
    return 0;
}
