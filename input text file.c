#include<stdio.h>

int main()
{
    FILE *file=fopen("beliveme.txt","w");
    char ch[10000];
    char bf[10000];
    if(file == NULL)
   {
      printf("Error!");
      exit(1);
   }
    printf("enter sentence \n");
    scanf("%[^EOF]c",&ch);
    fprintf(file,"%s",ch);
    fclose(file);

    FILE *open=fopen("beliveme.txt","r");
    if(open == NULL)
   {
      printf("Error!");
      exit(1);
   }
    fscanf(open,"%[^EOF]s",&bf);
    printf("%s",bf);
    fclose(open);
}
