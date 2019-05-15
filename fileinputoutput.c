  #include<stdio.h>

    typedef struct
    {
          int select;
          char lastname[25];
          char firstname[25];
          char address[25];
          char phonenumber[25];
    } addressbook;

    #define ARRAYLEN 2

    addressbook a[ARRAYLEN];
    FILE *fp;

    int main()
    {
         int i;

         fp = fopen("addressbook.dat","a+");

         for( i=0; i<ARRAYLEN ; i++)
         {
           printf("enter details\n");
           printf("enter lastname:\n");
           scanf("%s", a[i].lastname);
           printf("enter firstname:\n");
           scanf("%s", a[i].firstname);
           printf("enter address:\n");
           scanf("%s", a[i].address);
           printf("enter phone number:\n");
           scanf("%s", a[i].phonenumber);
           fwrite(&a[i], sizeof(a), 1, fp); /* notice, array indexed */
        }
        fclose(fp);

        fopen("addressbook.dat", "r");
        for(i=0; i<ARRAYLEN; i++)
        {
          fread(&a[i], sizeof(a), 1, fp );
          printf("lastname:%s\n", a[i].lastname);
          printf("firstname:%s\n", a[i].firstname);
          printf("address:%s\n", a[i].address);
          printf("phonenumber:%s\n", a[i].phonenumber);
        }
        fclose(fp);

        return 0;
    }
