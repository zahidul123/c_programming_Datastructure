#include<stdio.h>
int main()
{
    int test,dayques,i,j,k;
    while(scanf("%d",&test)!=EOF){
        for(i=0;i<test;i++){
            scanf("%d",&dayques);
            for(j=0;j<dayques;j++){
                scanf("%d",&k);
                if(k==1){
                    printf("Rolien\n");
                }else if(k==2){
                    printf("Naej\n");
                }else if(k==3){
                    printf("Elehcim\n");
                }else if(k==4){
                    printf("Odranoel\n");
                }
            }
        }
    }
}
