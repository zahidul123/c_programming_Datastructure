

#include <stdio.h>

int main()
{
    int T,j;
    scanf("%d",&T);
    for(j=1;j<=T;j++){

   long int n;
   int search, i;
   scanf("%ld",&n);
   int array[n];
   for (i = 0; i < n; i++)
      scanf("%d", &array[i]);

   scanf("%d", &search);

   for (i = 0; i < n; i++)
   {
      if (array[i] == search)
      {
         printf("Case %d: %d\n",j, i+1);
      }
   }

}

 }
