/* This program use call by value method of passing arguments to a function. When a function is called, the calling function has to pass some values to the called functions*/

#include <stdio.h>
int sum (int n);
void main()
{
     int a = 5;
     printf("\n The value of 'a' before the calling function is = %d", a);
     a = sum(a);
     printf("\n The value of 'a' after calling the function is = %d\n", a);
}
int sum (int n)
{
     n = n + 20;
     printf("\n Value of 'n' in the called function is = %d", n);
     return n;
}
