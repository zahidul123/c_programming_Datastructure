#include<stdio.h>
#include<stdbool.h>
int main()
{
    int test,backes,i,j=0,temp;
    bool k=true;
    while(scanf("%d %d",&test,&backes)!=EOF)
    {
        int returnsolder[backes];
        for(i=0; i<backes; i++)
        {
            scanf("%d",&returnsolder[i]);
        }

        if(test>backes)
        {
            for(i=0; i<backes; i++)
            {
                for(j=i+1; j<backes; j++)
                {
                    if(returnsolder[i]>returnsolder[j])
                    {
                        temp=returnsolder[i];
                        returnsolder[i]=returnsolder[j];
                        returnsolder[j]=temp;
                    }
                }
            }

            for(i=1; i<=test; i++)
            {

                /*  if(i==returnsolder[k])
                {
                   k++;
                }
                else
                {
                   printf("%d ",i);
                   j++;
                   k=i-j;
                }
                }
                */

                 k=true;
                 for(j=0;j<backes;j++){
                    if(i==returnsolder[j]){
                        k=false;
                        break;
                    }
                 }
                 if(k==true){
                    printf("%d ",i);
                 }
            }
    }
            else if(test==backes)
            {
                printf("*");
            }
            printf("\n");

        }
    }
