#include <stdio.h>

int main() {
    printf("Viraj Vikram Singh - 25/B08/054\n");

    FILE *source = fopen("source.txt", "r");
    if (source == NULL) {
        perror("Error opening file");
        return 1;
    }

    fseek(source, 0, SEEK_END);

    long size = ftell(source);

    printf("Size of File: %ld bytes\n", size);

    fclose(source);
    return 0;
}