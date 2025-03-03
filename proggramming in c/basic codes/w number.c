#include <stdio.h>
int main ()

{
    int num1, num2;

    printf("Enter The First NUmber: ");
    scanf("%d", &num1);
    printf("ENTER YOUR SECOND NUMBER");
    scanf("%d", &num2);

    if (num1>num2)
        printf("%d is greater than",num1);
    else
        printf("%d is grater than ",num2);
}