

#include<stdio.h>
int main(){

int T,i;
scanf("%d",&T);
for(i=1;i<=T;i++){
    int n,j,fac=1;
    scanf("%d",&n);
    if(0 <= n&&n <= 10){
        for(j=n;j>=1;j--){
            fac=fac*j;
        }
        printf("Case %d: %d",i,fac);
}
printf("\n");
}
}
