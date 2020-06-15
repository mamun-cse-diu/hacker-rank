#include<stdio.h>
int main()
{
    int n,i,b,k,sum=0;
    scanf("%d %d",&n,&k);
    int a[n];
    for(i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    scanf("%d",&b);
    for(i=0; i<n; i++){
        if(i!=k)
            sum = sum+a[i];
    }
    sum = sum/2;
    if(sum==b)
        printf("Bon Appetit\n");
    else{
        sum = b-sum;
        printf("%d\n",sum);
    }
    return 0;
}
