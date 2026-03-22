#include <stdio.h>

int main()
{
    int choice;
    do
    {
        printf("Welcome to Calculator\n");
        printf("\nChoose one of the following options:");
        printf("\n1. Add");
        printf("\n2. Subtract");
        printf("\n3. Multiply");
        printf("\n4. Devide");
        printf("\n5. Modulus");
        printf("\n6. power");
        printf("\n7. Exit");
        printf("Now, enter your choice: ");
        scanf("%d", &choice);
    } while (choice != 7);

    return 0;
}
