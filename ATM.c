#include<stdio.h>
void main()
{
    float x, y;
    char ch;
    int pin;
    printf("Enter your ATM pin:\n");
    scanf("%d", &pin);
    if(pin==8733)
    {
        printf("Enter your initial amount:\n ");
        scanf("%f", &x);
        printf("Enter \nc for credited\nd for debited\nb for balance\n");
        scanf("\n%c",&ch);
        switch(ch)
        {
            case 'c':
                printf("Enter credit amount:\n");
                scanf("%f", &y);
                x = x + y;
                printf("New amount=%0.2f", x);
                break;

            case 'd':
                printf("Enter debit amount:\n");
                scanf("%f", &y);
                if(x>=y)
                {
                x = x - y;
                printf("New Amount=%0.2f", x);
                }
                else
                {
                printf("Insufficient balance in your account!");
                }
                break;

            case 'b':
                printf("Current Balance=%0.2f", x);
                break;

            default:
                printf("\nPlease select the correct options!");
        }

    }

    else
    {
        printf("Incorrect ATM pin! Please try again");
    }
}


