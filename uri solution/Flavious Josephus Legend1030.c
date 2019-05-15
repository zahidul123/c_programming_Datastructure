#include<stdio.h>
int falviousjosephus(int quantity,int stepsize){
    if(quantity==1){
        return 1;
    }else{
         return (falviousjosephus(quantity-1,stepsize)+stepsize-1)%quantity+1;
    }
}
int main(){

int NC,i,n,k;
scanf("%d",&NC);
if(NC<=30){
    for(i=0;i<NC;i++){
      scanf("%d %d",&n,&k);
      int res=falviousjosephus(n,k);
      printf("Case %d: %d\n",i+1,res);
    }
}
return 0;
}
