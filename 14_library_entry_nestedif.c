#include <stdio.h>

/*
Problem 1 – Library Entry

Scenario:
A college library allows a student to enter the
Exam Preparation Section only if:

1. The student has a valid college ID.
2. If the ID is valid, check whether the student
   has a library membership.
3. Entry is allowed only when both conditions
   are satisfied.

Task:
Write a C program using a nested if statement
to display:

"Entry Allowed"

or

"Entry Not Allowed"
*/

int main()
{
    int validID, membership;

    printf("Is the college ID valid? (1-Yes, 0-No): ");
    scanf("%d", &validID);

    if(validID == 1)
    {
        printf("Does the student have library membership? (1-Yes, 0-No): ");
        scanf("%d", &membership);

        if(membership == 1)
        {
            printf("Entry Allowed");
        }
        else
        {
            printf("Entry Not Allowed");
        }
    }
    else
    {
        printf("Entry Not Allowed");
    }

    return 0;
}
