#include<stdio.h>
#include<string.h>
int main()
{
    char s[1000];
    int i,j,a,k;
    scanf("%[^\n]s",s);
    j=strlen(s);
    a=0;
    k=0;
    while(1){
        for(i=0; i<j; i++){
            if(k==(s[i]-'0'))
                a++;
        }
        k++;
        printf("%d ",a);
        a=0;
        if(k>9)
            break;
    }
}
