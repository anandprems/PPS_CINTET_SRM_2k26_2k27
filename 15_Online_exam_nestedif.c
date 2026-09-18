#include <stdio.h>

/*
Problem 2 – Online Examination

Scenario:
A student wants to attend an online examination.

The system should:

1. First check whether the student has registered
   for the exam.

2. If registered, check whether the exam fee is paid.

3. If both conditions are satisfied, display:
   "Exam Login Allowed"

4. If the student is not registered, display:
   "Please Register First"

5. If the student is registered but the fee is not paid,
   display:
   "Pay Exam Fee"

Task:
Write a C program using a nested if-else statement.
*/

int main()
{
    int registered, feePaid;

    printf("Is the student registered? (1-Yes, 0-No): ");
    scanf("%d", &registered);

    if(registered == 1)
    {
        printf("Is the exam fee paid? (1-Yes, 0-No): ");
        scanf("%d", &feePaid);

        if(feePaid == 1)
        {
            printf("Exam Login Allowed");
        }
        else
        {
            printf("Pay Exam Fee");
        }
    }
    else
    {
        printf("Please Register First");
    }

    return 0;
}
