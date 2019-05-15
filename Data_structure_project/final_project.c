
#include <stdio.h>

int array[100], n;

void display(int array[],int n)
{
    int i;
    if (n == 0)
    {
        printf("Heap is empty \n");
        return;
    }
    for (i = 0; i < n; i++)
        printf("%d ", array[i]);
    printf("\n");
}

void insert(int num, int location)
{
    int parentnode;
    while (location > 0)
    {
        parentnode =(location - 1)/2;
        if (num <= array[parentnode])
        {
            array[location] = num;
            return;
        }
        array[location] = array[parentnode];
        location = parentnode;
    }
    array[0] = num;
}


void delete(int array[],int size )
{
    int i=size-1;

    array[0]=array[i];
    i--;
    heap_sort(array,i);
}
void heap_sort(int array[],int size)
{
    int i,c,root,temp;

    for (i = 1; i <=size; i++)
    {
        c = i;
        do
        {
            root = (c - 1) / 2;
            if (array[root] < array[c])
            {
                temp = array[root];
                array[root] = array[c];
                array[c] = temp;
            }
            c = root;
        }
        while (c != 0);
    }
}
void search(int array[],int n)
{
    int i,key;
    printf("Enter the number that you search:");
    scanf("%d",&key);
    if (n == 0)
    {
        printf("Heap is empty \n");
        return;
    }
    for (i = 0; i < n; i++)
    {
        if(array[i]==key)
        {
            printf("The number is found");
        }
    }
}
void max_num(int array[],int n)
{
    int i,max;
    max=array[0];
    for (i = 0; i < n; i++)
    {
        if(array[i]>max)
        {
            max=array[i];
        }
    }
    printf("The maximum  number in heap: %d",max);
}
void min_num(int array[],int n)
{
    int i,min;
    min=array[0];
    for (i = 0; i < n; i++)
    {
        if(array[i]<min)
        {
            min=array[i];
        }
    }
    printf("The minimum  number in heap: %d",min);
}

void ancestor(int array[],int n,int num)
{
    int i,a[100];
    if (n == 0)
    {
        printf("Heap is empty \n");
        return;
    }
    for (i = 0; i < n; i++)
    {
        a[i]=array[i];
        if(array[i]==num)
        {
            break;
        }
    }
    printf("Common Ancestors : ");
    do
    {
        a[i]=a[(i-1)/2];

        printf("%d,",a[i]);
        i=(i-1)/2;
    }
    while(i>=1);
    printf("\n");

}
void update(int array[],int n )
{
    int i,key,num;
    printf("enter the number that is to be delete : ");
    scanf("%d",&key);
    printf("enter the number that you update : ");
    scanf("%d",&num);
    for(i=0; i<n; i++)
    {
        if(array[i]==key)
        {
            array[i]=num;
        }
    }
    heap_sort(array,n);
    printf("the number is updated : ");
}
int main()
{
    int choice, num;
    n = 0;
    while(1)
    {
        printf("1.Insert the element \n");
        printf("2.Delete the element \n");
        printf("3.Display all elements \n");
        printf("4.Search element: \n");
        printf("5.Search max number: \n");
        printf("6.Search min number: \n");
        printf("7.Find the Common Ancestor: \n");
        printf("8.Update an element: \n");
        printf("9.Quit \n");
        printf("Enter your choice : ");
        scanf("%d", &choice);
        switch(choice)
        {
        case 1:
            printf("Enter the element to be inserted to the list : ");
            scanf("%d", &num);
            insert(num, n);
            n = n + 1;
            break;
        case 2:
            delete(array,n);
            n=n-1;
            break;
        case 3:
            display(array,n);
            break;
        case 4:
            search(array,n);
            break;
        case 5:
            max_num(array,n);
            break;
        case 6:
            min_num(array,n);
            break;
        case 7:
            printf("Enter the element : ");
            scanf("%d", &num);
            ancestor(array,n,num);
            break;
        case 8:
            update(array,n);
            break;
        case 9:
            exit(0);
        default:
            printf("Invalid choice \n");
        }
    }
}
