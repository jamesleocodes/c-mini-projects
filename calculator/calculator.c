// This program is built for simple calculator using switch cases or if-else statements
#include <stdio.h> // standard library for input and output
#include <stdlib.h> // standard library for display a message at the end of excution
#include <string.h> // standard library for string
#include <math.h> // header file declare a set of functions to perform mathemmatical operation

int main(int argc, char *argv[]) // declare that the program will take argument
/* argc is argument count(integer) passed to the program, argv is argument vector */
{
 float value_one; // declare float
 float value_two;
 float answer;
 char operator;  // declare character

 printf("Enter calculation:\n\n");
 scanf("%f %c %f",&value_one, &operator, &value_two);

 switch(operator)  // Alternate to if-else-if ladder statement
    {
        case '/': answer = value_one/value_two;
            break;
        case '*': answer = value_one*value_two;
            break;
        case '+': answer = value_one + value_two;
            break;
        case '-': answer = value_one - value_two;
            break;
        case '^': answer = pow(value_one,value_two);
            break;
        case ' ': answer = sqrt(value_one);
            break;
        default: goto fail;
    }
printf("%.9g%c%.9g = %.6g\n\n", value_one, operator, value_two, answer);
goto exit;
fail:
    printf("Fail.\n");
exit:
    return 0;
}




