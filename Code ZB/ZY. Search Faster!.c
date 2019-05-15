#include <stdio.h>
int main()
{ int T,i;
scanf("%d",&T);
for(i=1;i<=T;i++){
    int c, first, last, middle, N, search;

    scanf("%d",&N);
    int arr[N],array[N];
   for (c = 0; c < N; c++){
      scanf("%d",&arr[c]);
      array[c]=arr[c];
   }
    if(arr[0]>arr[N-1])
        for (c = N-1; c >=0; c--)
            array[N-1-c]=arr[c];

   scanf("%d", &search);

   first = 0;
   last = N-1;
   middle = (first+last)/2;

   while (first <= last) {
      if (array[middle] < search)
         first = middle + 1;
      else if (array[middle] == search) {
         printf("Case %d: Found.\n",i);
         break;
      }
      else
         last = middle - 1;

      middle = (first + last)/2;
   }
   if (first > last)
      printf("Case %d: Not Found.\n",i);
}
   return 0;
}

