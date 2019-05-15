#include<stdio.h>
int still(int n, int k)
{
    int r = 0,i;
    for (i = 1; i <n; i++){
         r = (r + k) % i;
    }
    return r;
}
int main()
{
    int input_m,position_x;
    while(1)
    {
        scanf("%d",&input_m);
        if(input_m==0)
        {
            break;
        }
        position_x=1;
        while(1)
        {
            if(still(input_m,position_x)!=11)
            {
                position_x++;
            }
            else
            {
                break;
            }
        }
        printf("%d\n",position_x);
    }

}

