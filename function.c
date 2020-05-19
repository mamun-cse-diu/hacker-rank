#include<stdio.h>
int big_num(int m);
int main()
{
    int i,j;
    j=big_num(i);
    printf("%d\n",j);
    return 0;
}

int big_num(int m){
    int a,b,c,d,e;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    if(a>b && a>c && a>d)
        e=a;
    else if(b>a && b>c && b>d)
        e=b;
    else if(c>a && c>b && c>d)
        e=c;
    else
        e=d;
    return e;
}
