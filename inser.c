#include<stdio.h>



int insertation(int a[],int n)
{
int i,j,key;
for(j=1;j<n;j++)
{
    key = a[j];
    i=j-1;
    while(i>=0&&a[i]>key)
    {
        a[i+1]=a[i];
        i=i-1;
    }
    a[i+1]=key;
}
for(j=0;j<n;j++)
{
    printf("%d\n",a[j]);
}

}

int main()
{
    int k,sort;
    int arraysize=7;
    int array[]={100,99,89,123,72,23,102};
    sort=insertation(array,arraysize);

}
