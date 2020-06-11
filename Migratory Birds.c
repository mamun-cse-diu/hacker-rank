#include<stdio.h>
int main()
{
    int i,j,n,k=0,count=0,c=0;

    scanf("%d",&n);

    int arr[n],b=0;

    for(i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }

    for(i=1; i<=n; i++){
        count = 0;
        for(j=0; j<n; j++){
            if(i==arr[j])
                count++;
        }
        if(b<=count){
            if(b==count){
                b = count;
                c = i-1;
            }
            else{
                b = count;
                c = i;
            }
        }
    }

    printf("%d\n",c);
    return 0;

}
