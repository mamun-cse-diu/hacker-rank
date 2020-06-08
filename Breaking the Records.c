#include<stdio.h>
int main()
{
    int i,n,ha=0,la=0;
    scanf("%d",&n);
    long int a[n],h_s,l_s;
    for(i=0; i<n; i++){
        scanf("%ld",&a[i]);
    }
    h_s = a[0];
    l_s = a[0];
    for(i=1; i<n; i++){
        if(h_s<a[i]){
            h_s = a[i];
            ha++;
        }
        else if(l_s>a[i]){
            l_s = a[i];
            la++;
        }
    }
    printf("%d %d\n",ha,la);
    return 0;
}
