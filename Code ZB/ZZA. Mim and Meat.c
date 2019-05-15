
#include <stdio.h>

#include <stdlib.h>


int main(){


 int t,i;

 scanf("%d",&t);

for(i=1;i<=t;i++){

 int n,a,p;

 int money = 0, price = 101;

 scanf("%d",&n);

 while(n--){

   scanf("%d %d",&a,&p);

  if(price > p){ price = p;
 }

  money += price * a;

 }

 printf("%d\n",money);

 }

return 0;

}
