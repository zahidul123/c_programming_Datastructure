#include<stdio.h>
int BinDec(long long n);
int main()
{
    long long n=11;
    printf("%lld in binary = %d in decimal ",n,BinDec(n));
    return 0;
}

int BinDec(long long n){
    int dec=0,i=0,rem;
    while(n!=0){
        rem=n%10;
        n/=10;
        dec+=rem*pow(2,i);
        i++;
    }
    return dec;
}
