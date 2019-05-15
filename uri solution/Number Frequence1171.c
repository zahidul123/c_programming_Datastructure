#include<stdio.h>
int main()
{
    int n,i,j,k=0,cont=0,jp;
    scanf("%d",&n);
    int arr[n];

    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]>k)
        {
            k=arr[i];
        }
    }

    for(i=1; i<=k; i++)
    {
        for(j=0; j<n; j++)
        {
            if(arr[j]==i)
            {
                cont++;
            }
        }
        if(cont>=1)
        {
            printf("%d aparece %d vez(es)\n",i,cont);
        }
        cont=0;
    }
    return 0;
}
