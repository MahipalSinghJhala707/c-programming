#include <stdio.h>

int main() {
    int num1, num2, choice;
    printf("Enter 1 to add\n");
    printf("Enter 2 to subtract\n");
    printf("Enter 3 to multiply\n");
    printf("Enter 4 to divide\n");
    scanf("%d", &choice);
    printf("Enter the two numbers: ");
    scanf("%d %d", &num1, &num2);
    
    if (choice == 1) {
        printf("The sum is %d\n", num1 + num2);
    } else if (choice == 2) {
        printf("The difference is %d\n", num1 - num2);
    } else if (choice == 3) {
        printf("The product is %d\n", num1 * num2);
    } else if (choice == 4) {
        if (num2 != 0) {
            printf("The Division is %d\n", num1 / num2);
        } else {
            printf("Division by zero is not allowed\n");
        }
    } else {
        printf("invalid input\n");
    }

    return 0;
}

