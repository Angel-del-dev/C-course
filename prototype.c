#include <stdio.h>

void hello(char[], int); // Prototype ensures all arguments are correct


int main() {
    char name[25] = "Test";
    int age = 23;
    hello(name, age);
    return 0;
}

void hello(char name[25], int age) {
    printf("%s, %d", name, age);
}