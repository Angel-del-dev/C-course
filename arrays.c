#include <stdio.h>

int main() {
    double prices[] = { 3.5, 2.6 };
    /*
        sizeof() returns size in bytes
        if the datatype of each index is the same, we can divide
        the bytes of the array by the bytes of a position in the array
        which will give the amount of positions an array has
    */
    int size = sizeof(prices) / sizeof(prices[0]);
    for(int i = 0; i < size ; i++) {
        printf("\n%lf", prices[i]);
    }

    return 0;
}