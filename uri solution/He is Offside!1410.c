#include<stdio.h>

int main()
{
    int attack,defense,i,j,maxa,mind;
    int at[1000],defs[1000];
    while(1)
    {
        scanf("%d %d",&attack,&defense);
        if(attack==0&&defense==0)
        {
            break;
        }
        maxa=0;
        mind=0;
        for(i=0; i<attack; i++)
        {
            scanf("%d",&at[i]);
        }
        for(i=0; i<defense; i++)
        {
            scanf("%d",&defs[i]);
        }

        for(i=0; i<attack; i++)
        {
            for(j=i+1; j<attack; j++)
            {
                if(at[j]<at[i])
                {
                    maxa=at[i];
                    at[i]=at[j];
                    at[j]=maxa;
                }
            }

        }

        for(i=1; i<defense; i++)
        {
            for(j=i+1; j<defense; j++)
            {
                if(defs[j]<defs[i])
                {
                    mind=at[i];
                    defs[i]=defs[j];
                    defs[j]=mind;
                }
            }
        }
        if(at[0]>=defs[0]&&at[0]>=defs[1]){
            printf("N\n");
        }
        else if(at[0]>=defs[1])
        {
            printf("N\n");
        }
        else
        {
            printf("Y\n");
        }

    }
}
