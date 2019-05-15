#include<stdio.h>
#include <string.h>

int main(){


    char c;
    char str[1000];
    int string=0;
    char work[1000];

    char keyword[500][500];
    int key=0;
    char opera[500];
    int op=0;
    char syntex[500];
    int syn=0;
    int i,len;

    FILE *file;
    file = fopen("in.txt", "r");
    int sum=0;
    while(fscanf(file,"%c",&c)!= EOF)
    {
        str[string]=c;
        work[string]=c;
        string++;
        sum++;

   if(c == ' ' || c == '\n' || c == '\t'){
                work[string-1]='\0';
                //string=string-1;
                //wrok[string]
                if( strcmp(work,"int")==0 || strcmp(work,"float")==0 || strcmp(work,"double")==0 || strcmp(work,"char")==0 ||strcmp(work,"long")==0 || strcmp(work,"void")==0){
                    strcpy(keyword[key],work);
                    key++;
                }
                string=0;
            }

    }

        fclose(file);
     printf("\nLength is %d\n\n",sum);
     //printf("\n%c",str[37]);




    for(i=0; i<sum; i++)
    {
         if((str[i]=='(') || (str[i]==')') || (str[i]=='{') || (str[i]=='}') || (str[i]=='[') || (str[i]==']') || (str[i]==';') || (str[i]=='<') || (str[i]=='>'))
            {
                syntex[syn]=str[i];
                syn++;

            }

        else if((str[i]=='+') || (str[i]=='-') || (str[i]=='*') || (str[i]=='/') || (str[i]=='^') || (str[i]=='='))
            {
                opera[op]=str[i];
                op++;
            }
    }





printf("=================Syntex==================== %d\n ", syn);
    for(i=0; i<syn; i++)
    {
    printf("%c, ",syntex[i]);
    }
    printf("\n\n=================Operators==================== %d\n ", op);
    for(i=0; i<op; i++)
    {
    printf("%c, ",opera[i]);
    }


    printf("\n================Keyword========================= %d\n",key);
    for(i=0; i<key; i++)
        {
            puts(keyword[i]);
        }

 getch();

return 0;

}


