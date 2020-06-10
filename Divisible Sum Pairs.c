#include<stdio.h>
int main()
{
    int i,j,n,k,sum=0,count=0;

    scanf("%d %d",&n,&k);

    int a[n];

    for(i=0; i<n; i++){
        scanf("%d",&a[i]);
    }

    for(i=0; i<n; i++){

        for(j=0; j<n; j++){
            sum = a[i]+a[j];
            if(i!=j){
                if(sum%k==0 && sum>=k){
                    count++;
                }
            }
        }
    }
    count = count/2;
    printf("%d\n",count);
    return 0;

}
