#include <stdio.h>

/*
Problem 3 – HOTS: Smart ATM

Scenario:
An ATM has to process a withdrawal request.

The program receives:
- pinCorrect: 1 for correct PIN, 0 otherwise
- balance: available account balance
- amount: amount requested

The ATM should:

1. First check whether the PIN is correct.

2. If the PIN is correct, check whether
   sufficient balance is available.

3. If sufficient balance is available, check whether
   the amount is a multiple of Rs. 100.

4. If all conditions are satisfied, display:
   "Withdrawal Successful"

Task:
Write a C program using nested if statements.
*/

int main()
{
    int pinCorrect;
    float balance, amount;

    printf("Enter PIN status (1-Correct, 0-Incorrect): ");
    scanf("%d", &pinCorrect);

    printf("Enter available balance: ");
    scanf("%f", &balance);

    printf("Enter withdrawal amount: ");
    scanf("%f", &amount);

    if(pinCorrect == 1)
    {
        if(amount <= balance)
        {
            if((int)amount % 100 == 0)
            {
                printf("Withdrawal Successful");
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
        printf("Incorrect PIN");
    }

    return 0;
}
