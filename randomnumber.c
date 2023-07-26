#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    srand(time(0));// Using current time as a seed for a current number

    int number1 =  (rand() % 6) + 1; // Module 6 to simulate a dice(6 faces)
    printf("%d", number1);

    return 0;
}