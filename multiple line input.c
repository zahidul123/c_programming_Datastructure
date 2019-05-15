#include<stdio.h>

int main()
{
    char a[500];
    scanf("%[^EOF]c",a);
    printf("%s",a);
    return 0;
}
