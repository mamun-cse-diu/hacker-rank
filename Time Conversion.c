#include<stdio.h>
#include<string.h>
int main()
{
    int hour,min,sec;
    char day[3];
    scanf("%d:%d:%d%s",&hour,&min,&sec, day);
    if((strcmp(day,"PM")==0 && hour!=12))
        hour = hour+12;
    if((strcmp(day,"AM")==0 && hour==12))
        hour=0;
    printf("%02d:%02d:%02d\n",hour,min,sec);
    return 0;
}
