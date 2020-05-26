#include<stdio.h>
#include <string.h>
int main()
{
    char s[1000];
    int i,j;
    scanf("%[^\n]s", s);
    j=strlen(s);
    for(i=0; i<j; i++){
        if(s[i]==' ')
            printf("\n");
        else
            printf("%c",s[i]);
    }
    return 0;
}
