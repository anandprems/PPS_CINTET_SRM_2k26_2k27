#include <stdio.h>

int main()
{
    int choice;

    printf("===== CANTEEN MENU =====\n");
    printf("1. Tea\n");
    printf("2. Coffee\n");
    printf("3. Juice\n");
    printf("4. Sandwich\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
        case 1:
            printf("You selected Tea");
            break;

        case 2:
            printf("You selected Coffee");
            break;

        case 3:
            printf("You selected Juice");
            break;

        case 4:
            printf("You selected Sandwich");
            break;

        default:
            printf("Invalid Choice");
    }

    return 0;
}
