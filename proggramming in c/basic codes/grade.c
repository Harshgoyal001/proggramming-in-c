/*b)	Input the marks of a student in three subjects and print their grade based on a given 
grading system (e.g., 'A' for > 80%, 'B' for 60-80%).*/

#include <stdio.h>
#include <conio.h>

void main() {
    int marks;

    printf("\n Enter marks: ");
    scanf("%d", &marks);

    if (marks>=80) {
        printf("\n A");
    }  
    else if (marks<80 && marks>60)
    {
        printf("\n B");
    }
    else 
    {
        printf("\n FAIL");
    }
}