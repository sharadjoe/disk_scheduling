#include<stdlib.h>
#include<stdio.h>
int main()
{
    int i,arrival_time[10],burst_time[10],remaining_time[10],n,quantum,remain,flag=0;
    float turnaround_time,waiting_time,time;
    remain=n;
    printf("\nenter the number of processes:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\n enter the arrival time and burst time of process:");
        scanf("%d",&arrival_time[i]);
        scanf("%d",&burst_time[i]);
        remaining_time[i]=burst_time[i];
    }
    printf("\nEnter the time quantum:");
    scanf("%d",&quantum);
    printf("\n\nProcess\t|Waiting Time|TurnAround Time\n\n"); 
    
    for(time=0,i=0;remain!=0;)
    {
        if(remaining_time[i]<=quantum && remaining_time[i]>0)
        {
            time+=remaining_time[i];
            remaining_time[i]=0;
            flag=1;
        }
        else if(remaining_time[i]>quantum)
        {
            remaining_time[i]-=quantum;
            time+=quantum;
        }
        if(remaining_time[i]==0 && flag==1)
        {
            remain=remain-1;
            waiting_time=time-arrival_time[i]-burst_time[i];
            turnaround_time=time-arrival_time[i];
            printf("P[%d]\t|\t%f\t|\t%f\n",i+1,waiting_time,turnaround_time);
            flag=0;
        }
        if(i==n-1)
            i=0;
        else if(arrival_time[i+1]<=time)
            i++;
        else
            i=0;
    }
    return 0; 

}