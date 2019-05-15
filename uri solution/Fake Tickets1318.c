/*#include<stdio.h>
int main()
{
    int n,m,i,j,fake=0;
    while(1){
        scanf("%d %d",&n,&m);

        if(n==0&&m==0){
            break;
        }
        int ticket[m];
        memset(ticket,0,sizeof(ticket));
        for(i=0;i<m;i++){
            scanf("%d",&ticket[i]);
        }

        for(i=0;i<m;i++){
            for(j=i+1;j<m;j++){
                if(ticket[i]==0){
                    break;
                }else if(ticket[i]==ticket[j]){
                    ticket[j]=0;
                    ticket[i]=0;
                    fake++;
                    break;
                }
            }
        }
        printf("%d\n",fake);

        fake=0;
    }
}
*/
#include <stdio.h>
#include <string.h>

int array[10001];

int main()
{
    int n, m, t, counter,i;

    while (scanf("%d %d", &n, &m) && n != 0 && m != 0)
    {
        memset(array, 0, sizeof(array));
        counter = 0;

        for ( i = 0; i < m; ++i)
        {
            scanf("%d", &t);
           array[t]++;
            if (array[t] == 2)
                counter++;
        }

        printf("%d\n", counter);
    }

    return 0;
}

