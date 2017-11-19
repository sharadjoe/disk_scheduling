#include<stdio.h>
# define n 4
#include<conio.h>
int completedphilo=0,i;
struct fork
{
int taken;
}
forkavil[n];
struct philosp
{
int left,right;
}
philostatus[n];
void gofordinner(int philid)
{
int otherfork;
if(philostatus[philid].left==10 && philostatus[philid].right==10)
printf("\n philosopher % d completed his dinner \n",philid+1);
else if (philostatus[philid].left==1 && philostatus[philid].right==1)
{
printf("\n philosopher % d completed his dinner ",philid +1);
philostatus[philid].left=philostatus[philid].right=10;
otherfork=philid-1;
if(otherfork==-1)
otherfork =(n-1);
forkavil[philid].taken=forkavil[otherfork].taken=0;
printf("\n philosopher %d released fork % d and % d \n",philid+1,philid+1,otherfork+1);
completedphilo++;
}
else if (philostatus[philid].left==1 && philostatus[philid].right==0)
{
if(philid==(n-1))
{
if (forkavil[philid].taken==0)
{
forkavil[philid].taken=philostatus[philid].right=1;
printf("\n fork % d taken by philosopher % d ",philid+1,philid+1);
}
else
printf("\n philosopher % d is waiting for fork % d ",philid +1,philid +1);
}
else
{
int dupphilid=philid;
philid-=1;
if(philid==-1)
philid=(n-1);
if(forkavil[philid].taken==0)
{
forkavil[philid].taken=philostatus[dupphilid].right=1;
printf("\n fork %d taken by philosopher % d",philid +1,dupphilid +1);
}
else
printf("philosopher %d is waiting for fork %d",dupphilid+1,philid+1);
}}
else if(philostatus[philid].left==0)
{
if(philid==(n-1))
{
if(forkavil[philid-1].taken==0)
{
forkavil[philid-1].taken=philostatus[philid].left=1;
printf("{\n fork % d taken by philosopher % d ",philid ,philid +1);
}
else
printf("philosopher % d is  waiting for fork % d \n",philid +1,philid );
}
else {
if(forkavil[philid].taken==0)
{
forkavil[philid].taken=philostatus[philid].left=1;
printf("fork %d taken by philosopher %d \n",philid+1,philid+1);
 }
 else
 printf("\n philosopher % d is waiting for fork %d ",philid +1,philid +1);}
}
}


int main ()
{
clrscr();
for(i=0;i<n;i++)
forkavil[i].taken=philostatus[i].left=philostatus[i].right=0;
while(completedphilo<n)
{
for(i=0;i<n;i++)
gofordinner(i);
printf("\n till now num of philosophers completed dinner are % d \n \n ",completedphilo);

}
getch();
return 0;

}
