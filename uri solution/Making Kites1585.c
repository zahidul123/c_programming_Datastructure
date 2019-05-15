#include<stdio.h>
int main()
{
    int test,bamboomidle,bamboleft,i,result;
    scanf("%d",&test);
        for(i=0;i<test;i++){
           scanf("%d %d",&bamboomidle,&bamboleft);
           result=((bamboomidle*bamboleft)/2);
           printf("%d cm2\n",result);
        }

}
