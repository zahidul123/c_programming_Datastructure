#include<stdio.h>

void main(){
    float a,b,c,avg=0;
    printf("enter any three number : \n");
    scanf("%.1f %.2f %.3f",&a,&b,&c);
    avg=(a+b+c)/3.0;
    printf("the average is \t %.4f",avg);
    getch();
}
