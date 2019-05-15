#include <stdio.h>
int main()
{
    char a[300];
    int count=0,dist;
    double avg,sum=0;
    while(scanf("%[^\n]*c",&a)!=EOF){
        scanf("%d%*c",&dist);
        sum=sum+dist;
        count++;
    }
    avg=sum/count;
    printf("%.1lf\n",avg);
}
