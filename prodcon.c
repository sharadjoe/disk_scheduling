#include<stdlib.h>
void main()
{
    int mutex[100],a[100],size_buffer,size_customer,choice=1,mutex_producer,mutex_consumer[100],x=0,choice_consumer;
    clrscr();
    int producer(int);
    void consumer();
    printf("Enter the size of buffer:")
    scanf("%d",&size_buffer);
    printf("\nEnter the number of consumers:")
    scanf("%d",size_customer);
    while(1)
    {
        switch(choice)
        {
            case 1:
            {
                if(size_buffer!=0 and mutex_producer==1 and x<size_buffer)
                producer(x);
                else
                printf("Buffer is empty")
            }
            case 2:
            {
                for(int i=0;i<size_customer;i++)
                {
                    printf("\nConsumer ",i)
                    mutex[i]=0
                }
                printf("\n Enter the consuming consumer(0,%d)",i);
                scanf("%d",choice_consumer);
                consumer(choice_consumer,mutex[choice_consumer]);
            }
            default:
            printf("Sorry you entered the wrong choice");
        }
    printf("Do you want to continue(0/1):")
    scanf("%d",&choice);
    }
getch();
}

int procedure(int x)
{
    x++;
    printf("The %d item has been created",x);
    return x;
}
int consumer(int choice_consumer,int mutex[choice_consumer])
{
    if(mutex[choice_consumer]==1)
    printf("The item %d has been consumed by consumer ",x,choice_consumer);
    x--;
}