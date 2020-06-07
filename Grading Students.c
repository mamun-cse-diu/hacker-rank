#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int gread[n];
    for(i=0; i<n; i++){
        scanf("%d",&gread[i]);
    }
    for(i=0; i<n; i++){
        int a=0;
        if(gread[i]>=38){
            a=gread[i];
            while(a%5!=0){
                a++;
            }
            int b;
            b = a-gread[i];
            if(b<3)
                printf("%d\n",a);
            else
                printf("%d\n",gread[i]);
        }
        else
            printf("%d\n",gread[i]);
    }
    return 0;
}
