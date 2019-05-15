#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    int rdp,enp,inp,res;
    double dev,mul;
    while(1)
    {
        scanf("%d",&rdp);
        if(rdp==0)
        {
            break;
        }
        scanf("%d %d",&enp,&inp);
        mul=(rdp*enp*inp);
        res=(mul/abs(rdp-inp));
        if(res==1)
        {
            printf("%d pagina\n",res);
        }
        else
        {
            printf("%d paginas\n",res);
        }
    }
}
