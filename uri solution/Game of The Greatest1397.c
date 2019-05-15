#include<stdio.h>
int main()
{
    int test,mw=0,jw=0,ip,ic,i;
    while(1){
     scanf("%d",&test);
       if(test==0){
        break;
       }
        for(i=0;i<test;i++){
            scanf("%d %d",&ip,&ic);
            if(ip==ic){

            }else if(ip>ic){
                mw++;
            }else{
             jw++;
            }

        }
        printf("%d %d\n",mw,jw);
        mw=0;
        jw=0;
    }
}
