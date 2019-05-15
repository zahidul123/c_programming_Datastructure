#include<stdio.h>
int main()
{
    int n;
    int max;
    while(1){
        scanf("%d",&n);
        if(n==0){
            break;
        }
        max=n;
        while(n>1){
            if(n%2==0){
                n=(0.5*n);
            }else{
            n=(3*n)+1;
            }
            if(max<n){
                max=n;
            }
        }
        printf("%d\n",max);
    }
}
