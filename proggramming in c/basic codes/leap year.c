//	Write a program to check if a given year is a leap year, considering the rules for century years.

#include <stdio.h>
#include <conio.h>

void main() {
    int year;

    printf("\n Enter year: ");
    scanf("%d", &year);

    if (year % 4 == 0) {
        printf("\n Year is a leap year.");
    } else {
        printf("\n Year is not a leap year.");
    }
}