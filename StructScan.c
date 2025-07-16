#include <stdio.h>
#include <string.h>

// 1. Declare the structure
// This defines a new data type called 'struct Book'
struct Book {
    char title[100];
    char author[50];
    int year;
};

void fun(const struct Book* myBook) {
  if (0 < myBook->year) {  // Error: The right operand of '==' is a garbage value
    //do something
    printf("Year Published: %d\n", myBook->year);
  }
}   

int main() {
    // 2. Declare a variable of the struct type
    // 'myBook' is an instance of the 'struct Book'
    struct Book myBook;
    int madeYear;

    // 4. Access and print the member values
    printf("Title: %s\n", myBook.title);
    printf("Author: %s\n", myBook.author);
    printf("Year Published: %d\n", myBook.year);

    printf("Year Made: %d\n", madeYear);

    fun(&myBook);

    return 0;
}