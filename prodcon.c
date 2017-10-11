#include<conio.h>
#include<stdlib.h>
void main()
{
    int mutex[100],a[100],size_buffer,size_customer,choice=1;
    clrscr();
    void procedure();
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
                if(size_buffer!=0)
                producer();
                else
                printf("Buffer is empty")
            }
            default:
            printf("Sorry you entered the wrong choice");
        }
    printf("Do you want to continue(0/1):")
    scanf("%d",&choice);
    }
}