#include<stdio.h>
int main()
{
    int n,i,sum=0,k=10,mod;
    scanf("%d",&n);
    for(i=0; i<5; i++){
        mod = n%k;
        sum = sum+mod;
        n = n/k;
    }
    printf("%d\n",sum);
    return 0;
}
