#include<stdio.h>
int main()
{
    int i,n;
    scanf("%d",&n);
    int m[n],sum=0;
    for(i=0; i<n; i++){
        scanf("%d",&m[i]);
    }
    for(i=0; i<n; i++){
        sum=sum+m[i];
    }
    printf("%d\n",sum);
    return 0;
}
