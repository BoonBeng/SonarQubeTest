#include <stdio.h>
#include <string.h>

// 1. Declare the structure
// This defines a new data type called 'struct Book'
struct Book {
    char title[100];
    char author[50];
    int year;
};

int main() {
    // 2. Declare a variable of the struct type
    // 'myBook' is an instance of the 'struct Book'
    struct Book myBook;

    // 3. Use the struct by assigning values to its members
    // Use strcpy for string members
    strcpy(myBook.title, "The C Programming Language");
    strcpy(myBook.author, "Kernighan & Ritchie");
    //myBook.year = 1978;

    // 4. Access and print the member values
    printf("Title: %s\n", myBook.title);
    printf("Author: %s\n", myBook.author);
    printf("Year Published: %d\n", myBook.year);

    return 0;
}