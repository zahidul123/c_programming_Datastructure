
#include<stdio.h>
int main(){

int first,last,mid,i,j,n,kye,search;
scanf("%d",&n);
int array[n];
for(i=0;i<n;i++){
    scanf("%d",&array[i]);
}

  for(i=1; i<n; i++)
    {
        kye=array[i];
        j=i-1;
        while((kye<array[j])&&(j>=0))
        {
            array[j+1]=array[j];
            j=j-1;
        }
        array[j+1]=kye;
    }
     printf("After sorting: ");
    for(i=0; i<n; i++){
        printf(" %d",array[i]);
    }
    printf("\nEnter your search value : ");
       scanf("%d",&search);
    first=0;
   last=n-1;
   mid=(first+last)/2;

while(first<=last){
if(array[mid]==search){
    printf("search value %d is found at location %d.\n",search,mid+1);
    break;
    }
else if(array[mid]>search){
last=mid-1;
}
else
 first=mid+1;

mid=(first+last)/2;
   }
   if(first>last){
    printf("search value %d is not found\n",search);
   }

}
