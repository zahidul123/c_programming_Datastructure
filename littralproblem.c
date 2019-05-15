#include<stdio.h>

int main()
{
    char ch[20];
    gets(ch);
    int i=strlen(ch);
    int j,countvowel=0,countconsonant=0;
    for(j=0;j<i;j++){
        switch(ch[j]){
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            printf("the character ( %c ) is vowel\n",ch[j]);
            countvowel++;
            break;
        default:
            printf("the character ( %c ) is consonant\n",ch[j]);
            countconsonant++;

        }
    }
    printf("the number of vowel is %d\n",countvowel);
    printf("the number of consonant is %d",countconsonant);
    return 0;
}
