#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main()
{
    int a,b,sub;
    int ans,anr;
    double ugga,dugga,subs,bal;
    while(scanf("%d %d",&a,&b)!=EOF)
    {
        sub=abs(a-b);
        anr=(b/sub);
        dugga=anr;
        bal=sub;
        ugga=(b/bal);
        subs=ugga-dugga;
       /*  if(subs>=0.5)
          {
              ans=ceil(ugga+.1);
          }
          else if(subs<0.5)
          {

              ans=floor(ugga);

          }*/

        ans=(subs+ugga+.01);
        printf("%d\n",ans);
    }
    return 0;;
}
