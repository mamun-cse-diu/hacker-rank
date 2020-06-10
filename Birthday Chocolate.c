#include<stdio.h>
int main()
{
    int n,i,j,dt,m,sum=0,count=0,temp,a[1000];
    scanf("%d",&n);
    for(i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    scanf("%d %d",&dt,&m);
    for(i=0; i<n; i++){
        sum = 0;
        temp = 0;
        for(j=1; j<n; j++){
            if(temp<m){
                sum = sum+a[j];
                temp++;
            }
        }
        if(sum==dt){
            count++;
        }
    }
    printf("%d\n",count);
    return 0;
}
