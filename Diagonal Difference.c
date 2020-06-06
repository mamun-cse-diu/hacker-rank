#include<stdio.h>
int main()
{
    int i,j,n,sum1=0,sum2=0,sum=0;
    scanf("%d",&n);
    int a[n][n];
    for(i=0; i<n; i++){
        for(j=0; j<n; j++)
            scanf("%d",&a[i][j]);
    }
    for(i=0; i<n; i++){
        for(j=0; j<n; j++)
            if(i==j)
                sum1 = sum1+a[i][j];
    }
    for(i=0; i<n; i++){
        for(j=n-1; j>=0; j--)
            if(i+j==n-1)
                sum2 = sum2+a[i][j];
    }
    sum = sum1-sum2;
    if(sum<0)
        sum = sum*(-1);
    printf("%d\n",sum);
    return 0;

}
