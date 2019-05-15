#include<stdio.h>
int main()
{
    int first[5],second[5],i,count=0;
    for(i=0;i<5;i++){
        scanf("%d",&first[i]);
    }
     for(i=0;i<5;i++){
        scanf("%d",&second[i]);
    }
     for(i=0;i<5;i++){
        if(first[i]&&second[i]){
            count++;
        }else{

           count=count;
        }
    }
    if(count>0){
        printf("N\n");
    }else{
    printf("Y\n");
    }
}
