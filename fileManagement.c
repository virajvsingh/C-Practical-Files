#include <stdio.h>
#include <math.h>
#include <string.h>

int main(){
    FILE *source,*destination;
    source = fopen("source.txt","r");
    destination = fopen("destination.txt","w+");
    if (source == NULL || destination == NULL){
        printf("Couldn't Open the desired file!");
    }
    else{
        int ch;
        char fileChar;
        while((ch = fgetc(source))!=EOF){
            fileChar = ch;
            printf("%c",fileChar);
            fputc(ch,destination);
        }
        printf("\n");
        
        rewind(destination);
        while((ch = fgetc(destination))!=EOF){
            fileChar = ch;
            printf("%c",fileChar);
        }
    }

    fclose(source);
    fclose(destination);
}