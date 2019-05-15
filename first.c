#include<stdio.h>

int main()
{
    char p1[10];
    char p2[10];
    char p3[10];
printf("Enter First Grammer\n");

     gets(p1);

       printf("Enter Second Grammer\n");
            gets(p2);

          printf("Enter Third Grammer\n");
            gets(p3);


    if(p1[2]=='$')
    {
        printf("First of %c = {%c}\n",p1[0],p1[2]);
    }
    else if(p1[2]>='a' && p1[2]<='z'){
        printf("First of %c = {%c}\n",p1[0],p1[2]);
    }

    else if (p1[2] >= 'A' && p1[2]<='Z'){


           if(p2[2]=='$')
    {
        printf("First of %c = {%c}\n",p1[0],p2[2]);
    }
    else if(p2[2]>='a' && p2[2]<='z'){
 printf("First of %c = {%c}\n",p1[0],p2[2]);    }



    }

           if(p2[2]=='$')
    {
        printf("First of %c = {%c}\n",p2[0],p2[2]);
    }
    else if(p2[2]>='a' && p2[2]<='z'){
 printf("First of %c = {%c}\n",p2[0],p2[2]);    }



else if (p1[2] >= 'A' && p1[2]<='Z'){

           if(p3[2]=='$')
    {
        printf("First of %c = {%c}\n",p2[0],p3[2]);
    }
    else if(p3[2]>='a' && p3[2]<='z'){
 printf("First of %c = {%c}\n",p2[0],p3[2]);    }

}

 if(p3[2]=='$')
    {
        printf("First of %c = {%c}\n",p3[0],p3[2]);
    }
    else if(p3[2]>='a' && p3[2]<='z'){
 printf("First of %c = {%c}\n",p3[0],p3[2]);    }


return 0;
}
