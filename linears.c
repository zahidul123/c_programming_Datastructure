
#include<stdio.h>
int Linear_search(int a[10],int n,int key)
{
    int i;
    for(i=0;i<10;i++)
    {

        if(a[i]==key)
        {
            return i;
        }
    }
    return -1;


}
int main()
{
    int c[100];
    int j,position;
    int m;
    int k;
    printf("Enter array size: ");
    scanf("%d",&m);
    printf("Enter the key: ");
    scanf("%d",&k);
    for(j=0;j<m;j++)
    {
        printf("Enter index c[%d] value: ",j);
        scanf("%d",&c[j]);

    }
    position=Linear_search(c,m,k);

    if(position==-1)
    {
        printf("The search element is not found ");
    }
    else
    {
        printf("The search element is found at location %d",position);
    }

}
