#include<stdio.h>
int main()
{
    int real[1000],fake[1000],i,test,moka;
    while(1){
        scanf("%d",&test);
        if(test==0){
            break;
        }
        for(i=0;i<test;i++){
            scanf("%d",&moka);
            real[i]=moka;
            fake[i]=moka;
        }
        int temp,j;
        for(i=0;i<test;i++){
            for(j=0;j<test;j++){
                if(fake[i]>fake[j]){
                    temp=fake[i];
                    fake[i]=fake[j];
                    fake[j]=temp;
                }
            }
        }
        for(j=0;j<test;j++){
            if(fake[1]==real[j]){
                printf("%d\n",j+1);
                break;
            }
        }
    }
}
