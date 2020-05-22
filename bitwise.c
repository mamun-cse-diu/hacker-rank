#include<stdio.h>
int main()
{
    int a,b,c,n,k,i,j=2,aa=0,bb=0,cc=0;
    scanf("%d %d",&n,&k);
    for(i=1; i<n; i++){
        j=i+1;
        while(j<=n){
            a=i&j;
            b=i|j;
            c=i^j;
            if(a<k){
                if(a>=aa)
                    aa=a;
            }
            if(b<k){
                if(b>=bb)
                    bb=b;
            }
            if(c<k){
                if(c>=cc)
                    cc=c;
            }
            j++;
        }
    }
    printf("%d\n",aa);
    printf("%d\n",bb);
    printf("%d\n",cc);
    return 0;
}
