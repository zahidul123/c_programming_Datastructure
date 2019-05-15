#include<stdio.h>
int main()
{

    int i,n,a,b;
    char c;
    scanf("%d",&n);
        for(i=1; i<=n; i++)
        {
            scanf("%d %c %d",&a,&c,&b);
            if(a>=0 && a<=9 && b>=0 && b<=9)
            {
                if(a==b)
                    printf("%d\n",a*b);
                else if(c>='A'&&c<='Z')
                    printf("%d\n",b-a);
                else if(c>='a')
                    printf("%d\n",b+a);
            }
        }
    return 0;
}
