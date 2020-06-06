#include<stdio.h>
int main()
{
    int i,j,a=0,n;
    scanf("%d",&n);
    int s[n];
    for(i=0; i<n; i++){
        scanf("%d",&s[i]);
    }

    for(i=0; i<n; i++){
        for(j=i+1; j<n; j++){
            if(s[i]==s[j] && (s[i]!=0 || s[j]!=0)){
                a++;
                s[j]=0;
                break;
            }
        }
    }
    printf("%d\n",a);
    return 0;

}
