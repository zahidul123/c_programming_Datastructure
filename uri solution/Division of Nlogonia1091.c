#include<stdio.h>
int main()
{
    int i,lp=1,query,m_dpoint,n_dpoint,x_coor,y_coor;
    while(lp==1){
        scanf("%d",&query);
        if(query==0){
           break;
        }
        scanf("%d %d",&m_dpoint,&n_dpoint);
        for(i=0;i<query;i++){
            scanf("%d %d",&x_coor,&y_coor);
            if(m_dpoint==x_coor||n_dpoint==y_coor){
                printf("divisa\n");
            }else if(x_coor>m_dpoint&&y_coor>n_dpoint){
              printf("NE\n");
            }else if(x_coor<m_dpoint&&y_coor<n_dpoint){
              printf("SO\n");
            }else if(x_coor<m_dpoint&&y_coor>n_dpoint){
              printf("NO\n");
            }else if(x_coor>m_dpoint&&y_coor<n_dpoint){
              printf("SE\n");
            }
        }
    }
}
