#include<stdio.h>
int main()
{
    int player,match,count=0,determined=0,i,j;
    while(scanf("%d %d",&player,&match)!=EOF){
            int goal[player][match];

        for(i=0;i<player;i++){
            for(j=0;j<match;j++){
                scanf("%d",&goal[i][j]);
            }
        }
        for(i=0;i<player;i++){
            for(j=0;j<match;j++){
                if(goal[i][j]==0){
                    count=0;
                    break;
                }else{
                 count=1;
                }
            }
            if(count==1){
                determined++;
            }
        }
        printf("%d\n",determined);
        determined=0;
        count=0;
    }
}
