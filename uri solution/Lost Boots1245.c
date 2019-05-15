#include<stdio.h>
int main()
{
    int i,test,j,match=0;
    while(scanf("%d",&test)!=EOF){

        int size[test];
        char model[test];
        for(i=0;i<test;i++){
            scanf("%d %c",&size[i],&model[i]);
        }
        for(i=0;i<test;i++){
            for(j=i+1;j<test;j++){
                if(size[i]==size[j]){
                    if(model[i]=='E'&&model[j]=='D'||model[i]=='D'&&model[j]=='E'){
                       match++;
                       model[j]='o';
                       size[j]=0;
                       break;
                    }
                }
            }
        }
        printf("%d\n",match);
        match=0;
    }
}
