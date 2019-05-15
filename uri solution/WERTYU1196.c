#include<stdio.h>
#include<string.h>
/*
void main()
{
    int le;
    char inp[]="`1234567890-=QWERTYUIOP[]\ASDFGHJKL;'ZXCVBNM,./";
    char punctuation,res;
    while(scanf("%c",&punctuation)!=EOF){
        for(le=0;le<strlen(inp);le++){
            if(punctuation==inp[le]){
                printf("%c",inp[le-1]);
                break;
            }else if(punctuation==' '){
               printf(" ");
                break;
            }else if(punctuation=='\n'){
              printf("\n");
                break;
            }
        }

    }


}
*/
int main () {
	char base[48] = "`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";
	char c;
	int i;

	while( scanf("%c",&c)!=EOF) {

		for (i=0; i<48; i++) {
			if (c == base[i]) {
				printf("%c",base[i-1]);
				break;
			}
			else if (c == ' ') {
				printf(" ");
				break;
			}
			else if (c == '\n') {
				printf("\n");
				break;
			}
		}
	}

}
