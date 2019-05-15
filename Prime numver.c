
#include<stdio.h>
int checkprime(int );

int main(){

int T,i;
scanf("%d",&T);
for(i=1;i<=T;i++){

    int X,Y,j,result,count=0;

    scanf("%d%d",&X,&Y);
           printf("step %d:",i);
           printf("%d %d ",X,Y);
           for(j=X; j<=Y; j++)
           {
               result=checkprime(j);

           if (result==1){

            count++;
           }}
           printf("%d\n",count);


            }


}
int checkprime(int a){

int c;
for(c=2;c<=a-1;c++){
    if(a%c==0){
        return 0;
    }
}
    if(c==a)
        return 1;

}


