#include<stdio.h>
int main(){
 unsigned int a,b;
 while((scanf("%u %u",&a,&b))!=EOF){
    unsigned int res=a^b;
    printf("%u\n",res);
 }
 return 0;
}
