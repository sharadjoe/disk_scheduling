#include<stdlib.h>
void main()
{
    int mutex[100],a[100],size_buffer,size_customer,choice=1,mutex_producer,mutex_consumer[100],x=0;
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