#include<stdio.h>
#include<stdlib.h>
void mamun(int *v){

}
    int main() {
    int a,b,sum,dev;
    scanf("%d %d", &a ,&b);
    sum = a+b;
    dev = a-b;
    dev = abs(dev);
    mamun(&dev);
    printf("%d\n",sum);
    printf("%d\n", dev);
    return 0;
}
