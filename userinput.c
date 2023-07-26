#include <stdio.h>
#include <string.h>

int main() {
    char name[25]; //bytes
    printf("What's your name?: ");
    // scanf reads until whitespace
    // scanf("%s", &name);
    fgets(name, 25, stdin);
    // removes \n at the end(#include <string.h>)
    name[strlen(name)-1] = '\0';

    printf("\nHello %s how are you?", name);
    return 0;
}