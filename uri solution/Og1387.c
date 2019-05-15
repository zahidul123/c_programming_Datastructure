
#include<stdio.h>
int main()
{
    int test,mw,jw=0;
    while(1)
    {
        scanf("%d %d",&test,&mw);
        if(test==0&&mw==0)
        {
            break;
        }
        printf("%d\n",test+mw);

    }

}
