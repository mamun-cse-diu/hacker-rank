#include<stdio.h>
int main()
{
    int i,n;
    scanf("%d",&n);
    int m[n];
    for(i=0; i<n; i++){
        scanf("%d",&m[i]);
    }
    for(i=n-1; i>=0; i--){
        printf("%d ",m[i]);
    }
    return 0;
}
