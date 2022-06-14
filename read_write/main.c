/* THe program writes the info to a file named bookinfo.txt. */

//First includ the file with the structure definition
#include <stdio.h>
#include <stdlib.h>
FILE * fptr; //file pointer
struct bookInfo {
    char title[40];
    char author[25];
    float price;
    int pages;
};

int main(void)
{
    int ctr;
    struct bookInfo* books[3];
    // Get the information about each book from the user
    
    for (ctr = 0; ctr < 3; ctr++)
    {
            books[ctr] = (struct bookInfo*)malloc(sizeof(struct bookInfo));
            printf("What is the name of the book #%d?\n", (ctr+1));
            fgets(books[ctr]->title, 20,stdin);
            puts("Who is the author ?");
            fgets(books[ctr]->author,20,stdin);
     
            puts("How much did the book cost?");
            scanf(" %f", &books[ctr]->price);
     
            puts("How many pages in the book?");
            scanf(" %d", &books[ctr]->pages);
            getchar(); //clears last new line for the next loop
        }
    // Remember when tryping your filename path to double up
    // backslashes or C wil think you are putting in a conversion character
    fptr = fopen("/Users/zaw/Desktop/myProgramme/newmyProgramme/BookInfo.txt","w");
    
    // Test to ensure that the file opened
    
    if (fptr == 0)
    {
        printf("Error--file could not be opened.\n");
        exit(1);
    }
    
    // Print a header line and then loop through and print the info
    // to your file, but this time this printout wil in your
    //file and not on the screen
    
    fprintf(fptr,"\n\nHere is the collection of books: \n");
    for (ctr = 0; ctr < 3; ctr++)
    {
        fprintf(fptr,"#%d: %s by %s", (ctr+1), books[ctr]->title, books[ctr]->author);
        fprintf(fptr,"\nIt is %d pages and costs $%.2f", books[ctr]->pages, books[ctr]->price);
        fprintf(fptr, "\n\n");
    }
    fclose(fptr); // Always close your file
    return(0);
}
