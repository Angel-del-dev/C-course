#include <stdio.h> 
#include <string.h> 

struct Player {
    char name[12];
    int score;
};

int main() {
    struct Player player1;

    // To set an array of chars inside of a struct, call the strcpy
    strcpy(player1.name, 'test');
    player1.score = 10;
    
    return 0;
}