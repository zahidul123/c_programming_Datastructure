
#include <stdio.h>

#include <stdlib.h>


int main()

{

 int T,i,j,k;

scanf("%d",&T);

 for(i=1;i<=T;i++){

    int n,m;

  scanf("%d%d",&n,&m);

    int arr[n][m];

   for(j=0;j<n;j++){

       for(k=0;k<m;k++){

          scanf("%d",&arr[j][k]);

     }


    }

 int ch,t=0;

  scanf("%d",&ch);

  for(j=0;j<n;j++){

     for(k=0;k<m;k++){

        if(arr[j][k]==ch){

       t=1;

        break;

  }


     }

   if(t==1)

        break;


 }

  if(t==1){

         printf("Case %d: %d %d\n",i,j+1,k+1);


  }

    else

           printf("Case %d: Not Found!\n",i);



   }


 return 0;

}
