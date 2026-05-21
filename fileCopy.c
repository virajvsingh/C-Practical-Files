#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("Viraj Vikram Singh - 25/B08/054\n");

    FILE *source, *destination;
    // Changed to 'int' to properly handle EOF
    int ch; 

    source = fopen("source.txt", "r");
    if (source == NULL) {
        perror("Error opening source file");
        return 1;
    }

    destination = fopen("destination.txt", "w");
    if (destination == NULL) {
        perror("Error opening destination file");
        fclose(source);
        return 1;
    }

    while ((ch = fgetc(source)) != EOF) {
        fputc(ch, destination);
    }

    fclose(source);
    fclose(destination);

    printf("File copied successfully.\n");
    return 0;
}