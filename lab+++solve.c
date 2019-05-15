#include<stdio.h>

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
void LSearch()
{
    int c[100];
    int j,position;
    int m;
    int k;
    printf("Enter array size: ");
    scanf("%d",&m);

    for(j=0;j<m;j++)
    {
        printf("Enter index c[%d] value: ",j);
        scanf("%d",&c[j]);

    }
    printf("Enter the key: ");
    scanf("%d",&k);
    position=Linear_search(c,m,k);

    if(position==-1)
    {
        printf("The search element is not found \n");
    }
    else
    {
        printf("The search element is found at location %d\n",position);
    }}

int binary_search(int a[],int n,int key)
{
    int start=0;
    int end=n-1;
    int mid;
     mid=(start+end)/2;

    while(start<=end && a[mid]!=key)
    {

        if(key<a[mid])
        {
            end=mid-1;
        }
    else
    {
        start=mid+1;
    }
    mid=(start+end)/2;
    if(start>end)
    {
        return -1;
    }
    }
    return mid;
    }

void BinSearch()
{
    int c[100];
    int j,position;
    int m;
    int k;
    printf("Enter array size: ");
    scanf("%d",&m);

    for(j=0;j<m;j++)
    {
        printf("Enter index c[%d] value: ",j);
        scanf("%d",&c[j]);

    }
    printf("Enter the key: ");
    scanf("%d",&k);
    position=binary_search(c,m,k);

    if(position==-1)
    {
        printf("The search element is not found \n");
    }
    else
    {
        printf("The search element is found at location %d\n",position);
    }

}




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
    printf("%d ",a[j]);
}

 printf("\n");
}

void InsSort()
{
    int k,sort;
    int arraysize=7;
    int array[]={100,99,89,123,72,23,102};
    sort=insertation(array,arraysize);

}


int arr[20];       // array to be sorted

void MeSort()
{
  int n,i;

  printf("Enter the size of array\n");  // input the elements
  scanf("%d",&n);
  printf("Enter the elements:");
  for(i=0; i<n; i++)
    scanf("%d",&arr[i]);

  merge_sort(arr,0,n-1);  // sort the array

  printf("Sorted array:\n");
    // print sorted array
  for(i=0; i<n; i++)
    printf("%d ",arr[i]);
 printf("\n");
  return 0;
}

int merge_sort(int arr[],int low,int high)
{
  int mid;
  if(low<high) {
    mid=(low+high)/2;
    // Divide and Conquer
    merge_sort(arr,low,mid);
    merge_sort(arr,mid+1,high);
    // Combine
    merge(arr,low,mid,high);
  }

  return 0;
}

int merge(int arr[],int l,int m,int h)
{
  int Left[10],Right[10];  // Two temporary arrays to
  //hold the two arrays to be merged
  int n1,n2,i,j,k;
  n1=m-l+1;
  n2=h-m;

  for(i=0; i<n1; i++)
    Left[i]=arr[l+i];
  for(j=0; j<n2; j++)
    Right[j]=arr[m+j+1];

  Left[i]=9999;
  Right[j]=9999;

  i=0;
  j=0;
  for(k=l; k<=h; k++) { //process of combining two sorted arrays
    if(Left[i]<=Right[j])
      arr[k]=Left[i++];
    else
      arr[k]=Right[j++];
  }

  return 0;
}



int Quick_sort(int a[],int p,int r)
{
    int q;
    if(p<r)
    {
        q=partition(a,p,r);
        Quick_sort(a,p,q-1);
        Quick_sort(a,q+1,r);

    }
}
int partition(int a[],int p,int r)
{
    int x,i,j;
    int temp;

    x=a[r];
    i=(p-1);
    for(j=p;j<=r-1;j++)
    {
        if(a[j]<=x)
        {

            i=i+1;
            temp=a[j];
            a[i]=a[j];
            a[i]=temp;

        }
    }

    temp=a[i+1];
           a[i+1]=a[r];
           a[r]=temp;

    return i+1;
}
int insertion_sort(int a[],int n)
{
  int i,j,key;
  for(j=1;j<n;j++)
  {
      key=a[j];
      i=j-1;
      while(i>=0 && a[i]>key)
      {
          a[i+1]=a[i];
          i=i-1;
      }
      a[i+1]=key;
  }
  for(j=0;j<n;j++)
  {
      printf("%d ",a[j]);
  }
 printf("\n ");
}
void QiSort()
{
    int array[100];
    int c,d,k;
    int s,ch;
    printf("Enter the choice:");
    scanf("%d",&ch);
    if(ch==1)
    {
        printf("quick sort:\n");
    }
    else if(ch==2)
    {
        printf("insertion sort:\n");
    }

    printf("Enter the array size:");
    scanf("%d",&s);

    for(c=0;c<s;c++)
    {
        printf("Enter the array[%d]index value:",c);
        scanf("%d",&array[c]);
    }
  Quick_sort(array,0,s-1);

    for(d=0;d<s;d++)
    {
        printf("%d ",array[d]);
    }
 printf("\n ");
    insertion_sort(array,ch);
}


void CoinChange()
{
    int num,q,c,n,s;
    printf(" the ammount= ");
    scanf("%d",&s);

    printf("how many coin u have?\n= ");
    scanf("%d",&n);


    while(s>0)
        {
printf("Enter the coin value= ");
    scanf("%d",&c);


            if(c<=s)
            {num=s/c;
            s=s-(c*num);
            printf("%d taka note's number: %d\n",c,num);

        }

}
printf("\n");
}



int sum=0;
int max(int a,int b)
{
if(a>b)
return a;
else
return b;
}
void knapsack(int m,int n,int w[],int p[])
{
int v[100][200],x[10],i,j;
for(i=0;i<=m;i++)
v[0][i]=0;
for(i=1;i<=n;i++)
{
for(j=0;j<=m;j++)
{
if(j>=w[i])
v[i][j]=max(v[i-1][j],v[i-1][j-w[i]]+p[i]);
else
v[i][j]=v[i-1][j];
}
}
for(i=1;i<=n;i++)
x[i]=0;
i=n;
j=m;
while(i>0 && j>0)
{
if(v[i][j]!=v[i-1][j])
{
x[i]=1;
j=j-w[i];
}
i--;
}
printf("\nTHE OPTIMAL SET OF WEIGHTS IS:\n");
for(i=1;i<=n;i++)
{
if(x[i]==1)
{
printf("X%d=1\t",i);
sum=sum+p[i];
}
else
printf("X%d=0\t",i);
}
printf("\nTotal profit = %d\n",sum);
}
void KKnapsack()
{
int w[10],p[10],i,m,n;
printf("\t0/1 KNAPSACK PROBLEM\n\n");
printf("ENTER THE NUMBER OF ITEMS: ");
scanf("%d",&n);
printf("ENTER THE WEIGHTS OF THE ITEMS:\n");
for(i=1;i<=n;i++)
scanf("%d",&w[i]);
printf("ENTER THE PROFITS OF THE ITEMS:\n");
for(i=1;i<=n;i++)
scanf("%d",&p[i]);
printf("ENTER THE CAPACITY OF KNAPSACK: ");
scanf("%d",&m);
knapsack(m,n,w,p);
getch();
}



char que[20];
int front=0, rear=0, n;
char arrr[20];
int bfs(int );
char ajMat[20][20];
char b[20];
void display();
int p=0;

int BFS()
{
    char v;
    int i, j;
    printf("Enter the number of nodes in a graph");
    scanf("%d",&n);
    printf("Enter the value of node of graph");
    for(i=0; i<n; i++)
    {
        scanf("%s",&b[i]);
    }

    printf("Enter the value in adjancency matrix in from of 'y' or 'n'\n");
    printf("If there exits an edge between two vertices than 'y' otherwise 'n'\n");
    for(i=0; i<n; i++)
    printf(" %c ",b[i]);
    for(i=0;i<n; i++)
    {
        printf("\n%c ",b[i]);
        for(j=0; j<n; j++)
        {
             printf("%c ",v=getch());
             ajMat[i][j]=v;
        }
        printf("\n\n");
    }
    for(i=0;i<n;i++)
    {
     bfs(i);
    }


    display();
    getch();
}

void display()
{
    int i;
     printf("BFS of Graph : ");
     for(i=0; i<n; i++)
     printf("%c ",arrr[i]);
}

void insert(char val)
{
    que[front]=val;
    front++;
}

char del()
{
    rear=rear+1;
    return que[rear-1];
}

int unVisit(char val)
{
    int i;
    for(i=0; i<front; i++)
    {
         if(val==que[i])
         return 0;
    }
return 1;
}

int bfs(int i)
{
     char m;
     int j;
     if(front==0)
     {
         insert(b[i]);
     }
     for(j=0; j<n; j++)
     {
         if(ajMat[i][j]=='y')
         {
              if(unVisit(b[j]))
              {
                   insert(b[j]);
              }
         }
     }
     m=del();
     arrr[p]=m;
     p++;
     return 0;
}


char stack[20];
int top=-1, n;
char arry[20];
char dfs(int );
char ajMat[20][20];
char b[20];
void display();


void DFS()
{
    char v;
    int l=0;
    int i,j;
    printf("Enter the number of nodes in a graph");
    scanf("%d",&n);
    printf("Enter the value of node of graph");
    for(i=0; i<n; i++)
    {
        scanf("%s",&b[i]);
    }
    char k=b[0];
    printf("Enter the value in adjancency matrix in from of 'Y' or 'N'\n");
    printf("\nIf there is an edge between the two vertices then enter 'Y' or 'N'\n");
    for( i=0; i<n; i++)
    printf(" %c ",b[i]);
    for( i=0;i<n; i++)
    {
         printf("\n%c ",b[i]);
         for( j=0; j<n; j++)
         {
              printf("%c ",v=getch());
              ajMat[i][j]=v;
         }
         printf("\n\n");
    }
    for(i=0;i<n;i++)
    {
         l=0;
         while(k!=b[l])
         l++;
         k=dfs(l);
    }
    displa();
    getch();
}

void displa()
{
    int i, j;
     printf(" DFS of Graph : ");
     for(i=0; i<n; i++)
     printf("%c ",arry[i]);
}
void push(char val)
{
     top=top+1;
     stack[top]=val;
}
char pop()
{
     return stack[top];
}

int unVisitt(char val)
{
    int i, j;
      for(i=0; i<p; i++)
      if(val==arry[i])
      return 0;
      for(i=0; i<=top; i++)
      if(val==stack[top])
      return 0;
      return 1;
}

char dfs(int i)
{
    int j;
     int k;
     char m;
     if(top==-1)
     {
          push(b[i]);
     }
     m=pop();
     top--;
     arry[p]=m;
     p++;
     for(j=0; j<n; j++)
     {
          if(ajMat[i][j]=='y')
          {
               if(unVisitt(b[j]))
               {
                     push(b[j]);
               }
          }
     }
    return stack[top];
}


    int main()
{
    int t,g;
    printf("Enter Your Test Value= ");
    scanf("%d",&t);
    for(g=1;g<=t;g++){
    int input;

    printf( "1. \nLinear Search\n" );
    printf( "2. \nBinary Search\n" );
    printf( "3. \nInsertion Sort\n" );
    printf( "4. \nMerge Sort\n" );
    printf( "5. \nQuick Sort\n" );
    printf( "6. \nCoin Change\n" );
    printf( "7. \n0/1 Knapsack\n" );
    printf( "8. \nBFS\n" );
    printf( "9. \nDFS\n" );

    printf( "Selection: " );
    scanf( "%d", &input );
    switch ( input ) {
        case 1:            /* Note the colon, not a semicolon */
            LSearch();
            break;
        case 2:
            BinSearch();
            break;
        case 3:
          InsSort();
            break;
        case 4:
            MeSort();
            break;
        case 5:
            QiSort();
            break;
        case 6:
            CoinChange();
            break;
        case 7:
            KKnapsack();
            break;
        case 8:
            BFS();
            break;
        case 9:
            DFS();
            break;

        default:
            printf( "Bad input, quitting!\n" );
            break;
    }
    getchar();

}
}
