#include<stdio.h>

void sort(long int [],long int,long int);
void quicksort(long int [],long int,long  int);
int main()
{
    int i,tc,lp,p;
    long int put,sz;
    scanf("%d",&tc);
    for(lp=1; lp<=tc; lp++)
    {
        scanf("%ld",&sz);
        long int mnar[sz];
        for(i=0; i<sz; i++)
        {
            scanf("%ld",&put);
            mnar[i]=put;
        }
        scanf("%d",&p);
        if(p==2){
        sort(mnar,0,sz-1);
        }
        else {
          quicksort(mnar,0,sz-1);
        }

        printf("Case %d:\n",lp);
        for(i=0; i<sz; i++)
        {
            printf("%ld",mnar[i]);
            if(i<sz-1){
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}

void sort(long int mnar[],long  int fst,long int lst)
{
   long int pvt,j,cng,i;

    if(fst<lst)
    {
        pvt=fst;
        i=fst;
        j=lst;

        while(i<j)
        {
            while(mnar[i]>=mnar[pvt]&&i<lst)
                i++;
            while(mnar[j]<mnar[pvt])
                j--;
            if(i<j)
            {
                cng=mnar[i];
                mnar[i]=mnar[j];
                mnar[j]=cng;
            }
        }

        cng=mnar[pvt];
        mnar[pvt]=mnar[j];
        mnar[j]=cng;
        sort(mnar,fst,j-1);
        sort(mnar,j+1,lst);

    }
}

void quicksort(long int x[],long int first,long int last){
   long int pivot,j,temp,i;

     if(first<last){
         pivot=first;
         i=first;
         j=last;

         while(i<j){
             while(x[i]<=x[pivot]&&i<last)
                 i++;
             while(x[j]>x[pivot])
                 j--;
             if(i<j){
                 temp=x[i];
                  x[i]=x[j];
                  x[j]=temp;
             }
         }

         temp=x[pivot];
         x[pivot]=x[j];
         x[j]=temp;
         quicksort(x,first,j-1);
         quicksort(x,j+1,last);

    }
}

