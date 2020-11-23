#include<stdio.h>

void main()
{
    int height;
    do                                                                          //Loop to get integer between 1 to 8
        {printf("Enter height in integer(1 to 8): ");
         scanf("%d", &height);
         } while(height<1||height>8);
    for (int counter=1;counter<=height;counter++)                               //Loop to traverse vertically through the row
        {                                                                       //counter variable refers to the number of rows
        for (int spaces=1;spaces<=height-counter;spaces++)                      //loop to print spaces
            printf(" ");
        for (int hash=1;hash<=counter;hash++)                                   //loop to repint '#'
            printf("#");
        printf("  ");                                                           //prints 2 spaces
        for (int hash=1;hash<=counter;hash++)                                   //loop to print second half of '#'
            printf("#");
        printf("\n");                                                           //For newline
        }
}
