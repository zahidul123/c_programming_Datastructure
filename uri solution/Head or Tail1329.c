#include<stdio.h>
int main()
{
    int test,mw=0,jw=0,ip,i;
    while(1){
     scanf("%d",&test);/*mone rakhbe jodi test case e 0 input dile ses hobe emon bujale jodi ei vabe
     na dei tobe limelimit exsist bujai*/

       if(test==0){
        break;
       }
        for(i=0;i<test;i++){
            scanf("%d",&ip);
             if(ip==0){
                mw++;
            }else{
             jw++;
            }

        }
        printf("Mary won %d times and John won %d times\n",mw,jw);
        mw=0;
        jw=0;
    }
}
