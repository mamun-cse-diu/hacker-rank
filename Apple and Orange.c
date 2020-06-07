#include<stdio.h>
int main()
{
    int start_h,end_h,a_t,o_t,num_a,num_o,sum_a=0,sum_o=0;
    scanf("%d %d %d %d %d %d",&start_h,&end_h,&a_t,&o_t,&num_a,&num_o);
    int app[num_a],or[num_o],i;
    for(i=0; i<num_a; i++){
        scanf("%d",&app[i]);
        app[i] = a_t+app[i];
    }
    for(i=0; i<num_o; i++){
        scanf("%d",&or[i]);
        or[i] = o_t+or[i];
    }
    for(i=0; i<num_a; i++){
        if(app[i]>=start_h && app[i]<=end_h)
            sum_a++;
    }
    for(i=0; i<num_o; i++){
        if(or[i]>=start_h && or[i]<=end_h)
            sum_o++;
    }
    printf("%d\n%d\n",sum_a,sum_o);
    return 0;
}
