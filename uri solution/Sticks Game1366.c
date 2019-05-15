#include<stdio.h>
int main()
{
    int sum=0,test,ssize,snumber,i;
    while(1)
    {
        scanf("%d",&test);
        if(test==0)
        {
            break;
        }
        for(i=0; i<test; i++)
        {
            scanf("%d %d",&ssize,&snumber);
            sum=sum+(snumber/2);
        }
        printf("%d\n",sum/2);
        sum=0;
    }
}
