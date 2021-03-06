/* The program demonstrates passing an array to a function.*/

#include <stdio.h>
void swap(int *n1, int *n2); // Function declaration

int main()
{
    int num1 = 5, num2= 10;
    
    // address of num1 and num2 is passed
    swap( &num1, &num2);
    
    printf("num1 = %d\n", num1);
    printf("num2 = %d\n", num2);
    return 0;
}
// swap function
void swap(int* n1, int* n2)
{
    int temp;
    temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}
