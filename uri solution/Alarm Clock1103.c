#include<stdio.h>
#include<stdlib.h>
int main()
{
    int minutes=0,h1,h2,m1,m2,lp=1,mk=0;
    while(lp==1)
    {
        scanf("%d %d %d %d",&h1,&m1,&h2,&m2);
        if(h1==0&&h2==0&&m1==0&&m2==0)
        {
            break;
        }

        if(h1>=h2)
        {
            if(m1==m2&&h1==h2)
            {
                minutes=0;
            }
            else if(m1<=m2&&h1==h2)
            {
                minutes=m2-m1;
            }
            else
            {
                mk=(60-m1);
                minutes=(((23-h1)+h2)*60)+mk+m2;
            }

        }
        else if(h1<=h2)
        {
            if(h1<h2&&m1>m2)
            {
                minutes=(((h2-h1)*60)-abs(m2-m1));
            }
            else
            {
                minutes=(((h2-h1)*60)+abs(m2-m1));
            }

        }

        printf("%d\n",minutes);
    }
}
