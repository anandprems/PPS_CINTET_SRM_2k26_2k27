#include <stdio.h>

int main()
{
    int choice;
    float balance = 5000.0;
    float amount;

    printf("===== ATM MENU =====\n");
    printf("1. Check Balance\n");
    printf("2. Deposit\n");
    printf("3. Withdraw\n");
    printf("4. Exit\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
        case 1:
            printf("Balance = Rs. %.2f", balance);
            break;

        case 2:
            printf("Enter deposit amount: ");
            scanf("%f", &amount);

            if (amount > 0)
            {
                balance = balance + amount;
                printf("Deposit Successful\n");
                printf("Balance = Rs. %.2f", balance);
            }
            else
            {
                printf("Invalid Amount");
            }
            break;

        case 3:
            printf("Enter withdrawal amount: ");
            scanf("%f", &amount);

            if (amount > 0)
            {
                if (amount <= balance)
                {
                    if ((int)amount % 100 == 0)
                    {
                        balance = balance - amount;
                        printf("Withdrawal Successful\n");
                        printf("Balance = Rs. %.2f", balance);
                    }
                    else
                    {
                        printf("Amount must be a multiple of Rs. 100");
                    }
                }
                else
                {
                    printf("Insufficient Balance");
                }
            }
            else
            {
                printf("Invalid Amount");
            }
            break;

        case 4:
            printf("Thank You!");
            break;

        default:
            printf("Invalid Choice");
    }

    return 0;
}
