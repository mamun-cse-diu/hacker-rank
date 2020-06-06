#include<stdio.h>
int main()
{
    int i,a=0,n,b=0;
    scanf("%d",&n);
    char s[n];
    for(i=0; i<n; i++){
        scanf("%s",&s[i]);
    }
    for(i=0; i<n; i++){
        if(s[i]=='U'){
            a++;
            if(a==0)
                b++;
        }
        else
            a--;
    }

    printf("%d\n",b);
    return 0;

}
