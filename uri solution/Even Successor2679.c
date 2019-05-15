#include<stdio.h>
int main()
{
    long int a;
    while(scanf("%ld",&a)!=EOF){
        if(a%2==0){
            printf("%ld\n",a+2);
        }else{
            printf("%ld\n",a+1);
        }


    }
}
