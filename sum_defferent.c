#include<stdio.h>
int main()
{
    int n1,n2,def1;
    float n3,n4,def2;
    scanf("%d %d %f %f",&n1,&n2,&n3,&n4);
    if(n1>n2)
        def1=n1-n2;
    else
        def1=n2-n1;
    if(n3>n4)
        def2=n3-n4;
    else
        def2=n4-n3;
    printf("%d %d\n",(n1+n2),def1);
    printf("%.1f %.1f\n",(n3+n4),def2);
    return 0;
}
