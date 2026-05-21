#include <stdio.h>

int main(){
    printf("Viraj Vikram Singh - 25/B08/054\n");
    char str[20];
    printf("Enter a string: ");
    scanf("%s",&str);
    
    int counter = 0;


    while (counter<=20){
        if (str[counter]=='\0'){
            break;
        }
        else{
            counter++;
        }

    }
    printf("Length of the string: %d\n",counter);
    printf("Characters in the string are:\n");
    for (int i = 0; i < counter; i++) {
        printf("Character at index %d: %c\n", i, str[i]);
    }

}