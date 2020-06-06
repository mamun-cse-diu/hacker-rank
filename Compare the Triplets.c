#include<stdio.h>
int main()
{
    int a[3],b[3],i,aa=0,bb=0;
    for(i=0; i<3; i++)
        scanf("%d",&a[i]);
    for(i=0; i<3; i++)
        scanf("%d",&b[i]);
    for(i=0; i<3; i++){
        if(a[i]>b[i])
            aa++;
        else if(b[i]>a[i])
            bb++;
    }
    printf("%d %d\n",aa,bb);
    return 0;
}
