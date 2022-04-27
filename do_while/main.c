/* This program will multiply two numbers and display the
    reult for as long as the user wants. Ansering 'N' will
    break the loop. */

#include <stdio.h>

int main()
{
    float num1, num2, result;
    char choice;
    
    do {
        printf("Enter your first number to multiply: ");
        scanf(" %f", &num1);
        
        printf("Enter your second number to multiply: ");
        scanf(" %f", &num2);
        
        result = num1 * num2;
        printf("%.2f times %.2f equals %.2f\n\n", num1, num2, result);
        
        printf("Do you wnat to enter another pair of numbers ");
        printf("to multiply (Y/N): \n\n");
        scanf(" %c", &choice);
        
        //If the user enters a lowercase n, this statment will
        //convert it to an N
        if (choice == 'n')
        {
            choice = 'N';
        }
    } while (choice != 'N');
    return 0;
}
// Although this program is simple and straightforward, it demonstrates an effective use of a do...while loop. Again, you use the do...while construct instead of while when you want to ensure that the code within the loop executes at least once.
