#include<stdio.h>
int main()
{

    char str[20];
    char string;
    char c;
    int len, a;
    FILE *file = fopen("in.txt","r");

  fgets(str,20,file);
    len=strlen(str);

    a=0;


while(a<len){

    if(isdigit(str[a])){
        a++;
    }
    else{
        printf("\n is not a constant");
        break;
    }
}
if (a==len){
printf("\n It is a constant");}


}
