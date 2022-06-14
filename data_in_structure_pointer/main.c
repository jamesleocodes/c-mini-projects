/* THe program gets the bookInfo structure by including bookInfo.h and
 asks the user to fill in three structures and then prints them. */

//First includ the file with the structure definition
#include <stdio.h>
#include <stdlib.h>
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
    // Printf a header line and then loop through and print the info
    
    printf("\n\nHere is the collection of books: \n");
    for (ctr = 0; ctr < 3; ctr++)
    {
        printf("#%d: %s by %s", (ctr+1), books[ctr]->title, books[ctr]->author);
        printf("\nIt is %d pages and costs $%.2f", books[ctr]->pages, books[ctr]->price);
        printf("\n\n");
    }
    return(0);
}
