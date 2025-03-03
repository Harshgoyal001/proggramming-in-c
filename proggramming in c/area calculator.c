#include <stdio.h>
#include <conio.h>

void main() {
    int length , breath , radius ,side ,area;
    int choice;

   
    printf("CHOOSE THE OPERATION: \n");
    
    printf("1. area of square \n");
    printf("2. area of rectangle\n");
    printf("3. circle\n");
    printf("ENTER YOUR CHOICE (1-4): ");
    
    scanf("%d", &choice);


    switch(choice) {
        case 1:
            printf("\n enter side");
            scanf("%d"  , &side);
            area = side*side;
            printf("area of triangle=%d \n",area);
            break;


            case 2:
            printf("\n enter breath and length");
            scanf("%d %d"  , &length,&breath);
            area = length*breath;
            printf("area of rectangle=%d \n",area);
            break;

            case 3:
            printf("\n enter radius");
            scanf("%d",&radius);
            area = 3.14*radius*radius;
            printf("area of circle=%d \n",area);
            break;
    }        
}
        