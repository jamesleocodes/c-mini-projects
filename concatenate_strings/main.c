/* THis program asks a user for their hometown and two-letter abbreviation of their home state. It then uses string concatenation to bild a new string with both town and state and prints it using puts. */

#include<stdio.h>
#include<string.h>
int main()
{
    char city[15];
    // 2 chars for the state abbrev, and one for the null zero
    char st[3];
    char fullLocation[18] = "";
    
    puts("What twon do you live in ?");
    gets(city);
    
    puts("What state do you live in? (2-letter abreviation)");
    gets(st);
    
    /* Concatenate the strings*/
    strcat(fullLocation, city);
    strcat(fullLocation, ","); // Adds a comma and space between the city
    strcat(fullLocation,st); // and the state abbreaviation
    
    puts("\nYou live in");
    puts(fullLocation);
    return 0;
    
}

