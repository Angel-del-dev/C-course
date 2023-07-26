#include <stdio.h>

int main() {
    int age = 22;
    int *pAge = &age; // A pointer saves the address of a value(convention: p followed by varName)

    printf("\naddress of age: %p", &age);
    printf("\nvalue of pAge: %p", pAge);

    printf("\nvalue of age: %d", age);
    printf("\nvalue of stored address: %d", *pAge); // Adding * to a pointer is called derreferencing(value at address)
    return 0;
}