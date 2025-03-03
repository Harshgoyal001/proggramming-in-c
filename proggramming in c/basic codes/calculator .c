/*d) Create a menu-driven calculator program that allows users to choose operations 
like addition, subtraction, multiplication, and division using a switch-case statement*/

#include <stdio.h>
#include <conio.h>

void main() {
    int num1, num2, result;
    int choice;

    printf("----MATHEMATICAL CALCULATOR USING SWITCH----\n");
    printf("CHOOSE THE OPERATION: \n");
    printf("1. ADDITION\n");
    printf("2. SUBTRACTION\n");
    printf("3. MULTIPLICATION\n");
    printf("4. DIVISION\n");
    printf("5. MODULUS\n");
    printf("6. REMAINDER\n");
    printf("ENTER YOUR CHOICE (1-6): ");
    scanf("%d", &choice);

    printf("ENTER FIRST NUMBER: ");
    scanf("%d", &num1);

    printf("ENTER SECOND NUMBER: ");
    scanf("%d", &num2);

    switch(choice) {
        case 1:
            result = num1 + num2;
            printf("RESULT OF ADDITION = %d \n", result);
            break;

        case 2:
            result = num1 - num2;
            printf("RESULT OF SUBTRACTION = %d \n", result);
            break;

        case 3:
            result = num1 * num2;
            printf("RESULT OF MULTIPLICATION = %d \n", result);
            break;

        case 4:
            if(num2 == 0) {
                printf("ERROR: Division by zero is not allowed.\n");
            } else {
                result = num1 / num2;
                printf("RESULT OF DIVISION = %d \n", result);
            }
            break;

        case 5:
            if(num2 == 0) {
                printf("ERROR: Modulus by zero is not allowed.\n");
            } else {
                result = num1 % num2;
                printf("RESULT OF MODULUS = %d \n", result);
            }
            break;

        case 6:
            if(num2 == 0) {
                printf("ERROR: Division by zero for remainder operation.\n");
            } else {
                result = num1 % num2;
                printf("RESULT OF REMAINDER = %d \n", result);
            }
            break;

        default:
            printf("INVALID CHOICE! PLEASE CHOOSE FROM OPTIONS 1 TO 6.\n");
    }

    getch();
}