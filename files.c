#include <stdio.h>

void writeFile() {
    // Modes: w, a, r,...
    FILE *pF = fopen("files/test.txt", "a"); // Instead of assigning a variable, we assign the address of the operation
    fprintf(pF, "\nSpongebob squarepants");
    fclose(pF); // Dont dereference it
}

void readFile() {
    FILE *pF = fopen("files/test.txt", "r"); // Instead of assigning a variable, we assign the address of the operation
    char buffer[255];

    // Check if exists
    if(pF == NULL) {
        printf("Unable to open file\n");      
    }else {
        while(fgets(buffer, 255, pF) != NULL) 
        {
            // Read single line
            printf("%s", buffer);
        }
    }


    

    fclose(pF); // Dont dereference it
}

int main() {
    writeFile();
    readFile();
    return 0;
}