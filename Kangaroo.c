#include<stdio.h>
int main()
{
    int x1,x2,v1,v2,sum,a,b;
    scanf("%d %d %d %d",&x1,&v1,&x2,&v2);
    a = x1+v1;
    b = x2+v2;
    sum=b-a;
    while(1){
        if(x1>x2 && v1<v2){
            printf("NO\n");
            break;
        }
        else{
            sum = (x2+v2)-(x1+v1);
            if(sum==0){
                printf("YES\n");
                break;
            }
            else {
                x1 = x1+v1;
                x2 = x2+v2;
            }
        }
        printf("%dsum\n",sum);

    }

    return 0;
}
