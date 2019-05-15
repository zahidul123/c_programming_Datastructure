#include<stdio.h>
#include<string.h>

int main()
{
    int keyword=0,keywordnumber=0;

    FILE *open_file=fopen("chekers.txt","r");

    char total_file_char [6000];
    char keywords[10],keywordsarr[70][1000];
    char extract;

    char ext_string[10000];
    int size_of_file=0;

    int syn=0;
    char syntext[300];

    int oper=0;
    char operat[300];

    while(fscanf(open_file,"%c",&extract)!=EOF)
    {

        keywords[keyword]=extract;
        ext_string[size_of_file]=extract;
        size_of_file++;
        keyword++;

        if(extract==' '||extract=='('||extract=='{')
        {

            keywords[keyword-1]='\0';

            if(strcmp("int",keywords)==0||strcmp("double",keywords)==0||strcmp("float",keywords)==0||strcmp("char",keywords)==0||strcmp("for",keywords)==0||strcmp("if",keywords)==0||strcmp("else",keywords)==0||strcmp("while",keywords)==0)
            {
                strcpy(keywordsarr[keywordnumber],keywords);
                keywordnumber++;


            }
            keyword=0;
        }

    }

    fclose(open_file);
    int i;

    printf("the number of char in this file is %d\n\n",size_of_file);
    for(i=0; i<size_of_file; i++)
    {
        if(ext_string[i]=='('||ext_string[i]==')'||ext_string[i]=='{'||ext_string[i]=='}'||ext_string[i]=='['||ext_string[i]==']'||ext_string[i]==';'||ext_string[i]==',')
        {
            syntext[syn]=ext_string[i];
            syn++;

        }
        else if(ext_string[i]=='+'||ext_string[i]=='-'||ext_string[i]=='*'||ext_string[i]=='/'||ext_string[i]=='='||ext_string[i]=='>'||ext_string[i]=='<'||ext_string[i]=='&')
        {
            operat[oper]=ext_string[i];
            oper++;

        }

    }

    printf("the number of keywords in this file is %d\n\n",keywordnumber);

    printf("the keywords are\n");
    for(i=0; i<keywordnumber; i++)
    {
        puts(keywordsarr[i]);
    }


    printf("the number of syntax in this file is %d\n\n",syn);
    printf("the keywords are\n");
    for(i=0; i<syn; i++)
    {
        printf("%c ",syntext[i]);
    }



    printf("the number of operator in this file is %d\n\n",oper);
    printf("the keywords are\n");
    for(i=0; i<oper; i++)
    {
        printf("%c, ",operat[i]);
    }


}
