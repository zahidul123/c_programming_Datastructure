#include<stdio.h>

int main()
{
    char fst[10];
    char sec[10];
    char third[10];
    printf("Enter First string\n");

    gets(fst);

    printf("Enter Second string\n");
    gets(sec);

    printf("Enter third string\n");
    gets(third);


    if(fst[2]=='$')
    {
        printf("First of %c = %c\n",fst[0],fst[2]);
    }
    else if(fst[2]>='a' && fst[2]<='z')
    {
        printf("First of %c = %c\n",fst[0],fst[2]);
    }

    else if (fst[2] >= 'A' && fst[2]<='Z')
    {

        if(sec[2]=='$')
        {
            printf("First of %c = %c\n",fst[0],sec[2]);
        }
        else if(sec[2]>='a' && sec[2]<='z')
        {
            printf("First of %c = %c\n",fst[0],sec[2]);
        }



    }

    if(sec[2]=='$')
    {
        printf("First of %c = %c\n",sec[0],sec[2]);
    }
    else if(sec[2]>='a' && sec[2]<='z')
    {
        printf("First of %c = %c \n",sec[0],sec[2]);
    }



    else if (fst[2] >= 'A' && fst[2]<='Z')
    {

        if(third[2]=='$')
        {
            printf("First of %c = %c \n",sec[0],third[2]);
        }
        else if(third[2]>='a' && third[2]<='z')
        {
            printf("First of %c = %c \n",sec[0],third[2]);
        }

    }

    if(third[2]=='$')
    {
        printf("First of %c = %c\n",third[0],third[2]);
    }
    else if(third[2]>='a' && third[2]<='z')
    {
        printf("First of the string %c = %c \n",third[0],third[2]);
    }


    return 0;
}
