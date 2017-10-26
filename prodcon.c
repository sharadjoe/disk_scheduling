#include<stdlib.h>
#include<stdio.h>
int main()
{
    int mutex[100],a[100],size_buffer,condition=1,size_consumer,choice=1,mutex_consumer[100],x=0,i,choice_consumer;
    int producer(int);
    int consumer(int,int[],int);
    printf("Enter the size of buffer:");
    scanf("%d",&size_buffer);
    printf("Enter the number of consumers:");
    scanf("%d",&size_consumer);
    while(condition)
    {
        printf("\n1.Producer\n2.Consumer\n3.Exit\nEnter Your Choice:-");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            {
                if(size_buffer!=0 && x<size_buffer)
                    x=producer(x);
                else
                    printf("Buffer is full");
                break;
            }
            case 2:
            {
                if(x!=0)
                {
                    for(int i=0;i<size_consumer;i++)
                    {
                        printf("\nConsumer %d",i);
                        mutex[i]=0;
                    }
                    printf("\n Enter the consuming consumer(0,%d)",size_consumer-1);
                    scanf("%d",&choice_consumer);
                    x=consumer(x,mutex,choice_consumer);
                }
                else
                    printf("Buffer is empty");
                break;
            }
            case 3:
            {
                condition=0;
                break;
            }
            default:
            {
                printf("\nSorry you entered the wrong choice");
                break;
            }
        }
    printf("\nDo you want to continue(0/1):");
    scanf("%d",&condition);
    }
    
}

int producer(int x)
{
    x++;
    printf("The %d item has been created",x);
    return x;  
}

int consumer(int x,int mutex[],int choice_consumer)
{
    mutex[choice_consumer]=1;
    int s=1;
    if(mutex[choice_consumer]==1 && x!=0)
    {
        while(s==1)
        {
            if(x!=0)
            {
                printf("The %d consumer consumed item %d",choice_consumer,x);
                --x;
                printf("Do you want to keep consuming(1/0):-");
                scanf("%d",&s);
            }
            else
            printf("Buffer is empty");
        }
    }
    return x;

}
