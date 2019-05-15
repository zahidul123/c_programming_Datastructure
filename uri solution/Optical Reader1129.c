#include<stdio.h>
int main()
{
    int a,i,j=0,k=0,l,test,m;
    while(1)
    {
        scanf("%d",&test);
        if(test==0)
        {
            break;
        }
        for(i=0; i<test; i++)
        {
            for(m=0; m<5; m++)
            {
                scanf("%d",&a);
                if(a<=127)
                {
                    l=m;
                    j++;
                }
                else
                {
                    k++;
                }
            }

            if(j>1||k==5)
            {
                printf("*\n");
            }
            else
            {

                if(l==0)
                {
                    printf("A\n");
                }
                else if(l==1)
                {
                    printf("B\n");
                }
                else if(l==2)
                {
                    printf("C\n");
                }
                else if(l==3)
                {
                    printf("D\n");
                }
                else if(l==4)
                {
                    printf("E\n");
                }
            }


            j=0;
            k=0;
        }

    }
}
