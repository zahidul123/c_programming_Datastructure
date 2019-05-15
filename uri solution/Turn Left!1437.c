#include<stdio.h>
#include<string.h>
int main()
{
    int test;
     int couright,couleft,i,product;
    char commd[10000];
    while(1)
    {
        product=0;
        couright=0;
        couleft=0;
        scanf("%d",&test);

        if(test==0)
        {
            break;
        }
        else
        {
            gets(commd);
            for(i=0; i<strlen(commd); i++)
            {
                if(commd[i]=='E')
                {
                    couleft++;
                }
                else
                {
                    couright++;
                }

            }
            if(couright>couleft)
            {
                product=couright-couleft;
                if(product%4==0)
                {
                    printf("N\n");
                }
                else if(product%4==1)
                {
                    printf("L\n");
                }
                else if(product%4==2)
                {
                    printf("S\n");
                }
                else if(product%4==3)
                {
                    printf("O\n");
                }
            }
            else
            {
                product=couleft-couright;
                if(product%4==0)
                {
                    printf("N\n");
                }
                else if(product%4==1)
                {
                    printf("O\n");
                }
                else if(product%4==2)
                {
                    printf("S\n");
                }
                else if(product%4==3)
                {
                    printf("L\n");
                }
            }
        }


    }
}
