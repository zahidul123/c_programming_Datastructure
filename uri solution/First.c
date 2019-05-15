#include<stdio.h>

int main()
{
    char fst[20],sec[15],thr[15];
    char c;
    int i;
    printf("Enter the first string : ");
    gets(fst);
    for(i=0;i<20;i++){
        if(fst[2]=='$'){
            printf("The first of the string %c is -> $",fst[0]);
             exit(0);
        }else if(fst[i-1]=='|' && fst[i]>='A'&&fst[i]<='Z'){
         c=fst[i];
         printf("Enter second string ");
         gets(sec);
        }
    }
  int len=strlen(sec);
    for(i=0;i<len;i++){

        if(sec[2]=='$'){
            printf("The first of the string %c is -> $",fst[0]);
            exit(0);
        }else if(sec[i-1]=='|'&&sec[i]>='A'&&sec[i]<='Z'){
         c=sec[i];
         printf("Enter third string ");
         gets(thr);
         break;
        } else if(sec[i]>='a'&&sec[i]<='z'){
           printf("the first of %c is -> %c ",fst[0],sec[i]);
        }else if(sec[i]=='\n'){
            break;
        }
    }


    for(i=0;i<20;i++){

        if(thr[2]=='$'){
            printf("The first of the string %c is -> $",fst[0]);
            exit(0);
        } else if(sec[i]>='a'&&sec[i]<='z'){
           printf("the first of %c is -> %c ",fst[0],thr[i]);
        }else if(thr[i]=='\n'){
            break;
        }
    }


}
