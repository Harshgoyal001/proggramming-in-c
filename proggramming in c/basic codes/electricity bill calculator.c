/*c)	Design a program to calculate electricity bill based on units consumed, 
applying different slab rates for different consumption ranges.*/


#include <stdio.h>
#include <conio.h>

void main() {
    int units;
    float bill;

    printf("Enter the number of units consumed: ");
    scanf("%d", &units);

    if (units <= 100) {
        bill = units * 3;
    } 
    else if (units <= 300) {
        bill = (100 * 3) + (units - 100) * 5;
    } 
    else {
        bill = (100 * 3) + (200 * 5) + (units - 300) * 7;
    }

    printf("The electricity bill for %d units consumed is: %.2f\n", units, bill);
}