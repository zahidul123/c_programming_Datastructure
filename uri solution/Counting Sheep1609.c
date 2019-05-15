/*#include<stdio.h>
int main()
{
    int test,numbersheep,numbers,count,destinict,i,j,k,min;
    int ar[1000];
    scanf("%d",&test);
    for(i=0; i<test; i++)
    {
        destinict=0;
        min=0;
        memset(ar,0,sizeof(ar));
        scanf("%d",&numbersheep);
        for(j=0; j<numbersheep; j++)
        {
            scanf("%d",&ar[i]);
            destinict++;
        }
        for(j=0; j<numbersheep; j++)
        {
            min=ar[j];
            for(k=j+1; k<numbersheep; k++)
            {
                if(min==ar[k])
                {
                    destinict=destinict-1;
                    break;
                }
            }
        }
        printf("%d\n",destinict);
    }
    return 0;
}
*/
#include<stdio.h>
#include<stdlib.h>


int ara[10000];
int main()
{
        memset(ara,0,sizeof(ara));
        int tc,n,i,j,tmp;
            scanf("%d",&tc);

                while(tc--){
                   int tmp=0;
                        scanf("%d",&n);
                        for(i=0;i<n;i++){
                            scanf("%d",&ara[i]);  // 1 2 3 2 3 -- output--: 3
                             tmp++;
                        }
                        int t=0;
                            for(i=0;i<n;i++){
                                    t=ara[i]; // 1
                                    for(j=i+1;j<n;j++){
                                            if(t==ara[j]){
                                            tmp=tmp-1;
                                            break;
                                            }
                                    }
                            }

                                        printf("%d\n",tmp);
                }

    return 0;
}

