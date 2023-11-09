#include<stdio.h>
struct timeperiod
{
    int hours;
    int minutes;
    int seconds;
};
void remainingtime(struct timeperiod time1,struct timeperiod time2)
{
    int a,b;
    a=time1.hours*3600+time1.minutes*60+time1.seconds;
    b=time2.hours*3600+time2.minutes*60+time2.seconds;
    if(a>b)
    {
    int diff=a-b;
    printf("Remaining time is %d hours\n%d minutes\n%d seconds",diff/3600,(diff%3600)/60,(diff%3600)%60);
    }
    else
    {
    int diff=b-a;
    printf("\nRemaining time is\n %d hours\n%d minutes\n%d seconds",diff/3600,(diff%3600)/60,(diff%3600)%60);
    }
}
int main()
{
    struct timeperiod time[2];
    for(int i=0;i<2;i++)
    {
        printf("Enter timeperiod%d\n ",i+1);
        printf("Enter number of hours: ");
        scanf("%d",&time[i].hours);
        printf("Enter remaining time in minutes: ");
        scanf("%d",&time[i].minutes);
        printf("Enter remaining time in seconds: ");
        scanf("%d",&time[i].seconds);
    }
    remainingtime(time[0],time[1]);
    return 0;
}