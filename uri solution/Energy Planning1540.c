#include<stdio.h>


int main()
{
    int test,i,j,k,l=0;
    double b,d,a,c;
    double ans,suber,subgrd;
    char array[30];
    while(scanf("%d",&test)!=EOF)
    {
        for(i=0; i<test; i++)
        {
            scanf("%lf %lf %lf %lf",&a,&b,&c,&d);
            suber=c-a;
            subgrd=d-b;
            ans=((subgrd/suber)*100);

            long int dign=ans;
            while(dign>0){
            array[l]=dign%10;
            dign=dign/10;
            l++;
            }
            for(j=l-1;j>=0;j--){
            if(j==1){
                printf(",");
            }
            printf("%d",array[j]);
            }
            printf("\n");
            l=0;
            }

        }

}
