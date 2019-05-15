#include<stdio.h>
int main()
{
    int T;
    long long int i,n,k;
    scanf("%d",&T);
    for(i=1; i<=T; i++)
    {
        k=0;
        scanf("%lld",&n);
       while(n!=1){
        if(n%2==0){
           k++;
           n=n/2;
        }
        else{
            break;
        }
       }
        if(k%2!=0){
                printf("Egg First!\n");
        }
        else if(k%2==0){
            printf("Chicken First!\n");
        }
        else{
            printf("Chicken First!\n");
        }
    }

    return 0;

}
