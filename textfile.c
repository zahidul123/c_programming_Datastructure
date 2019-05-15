#include<stdio.h>

int main(){

	FILE *fp;

	char ch[10000];

	fp= fopen("test.txt","r");

	while(scanf("%c",&ch)!=EOF){}
		printf("%s",ch);

}
