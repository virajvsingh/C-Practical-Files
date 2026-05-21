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
            if (str[counter]>=65 & str[counter]<=92){
                str[counter]+=32;
            }
            counter++;
        }

    }


    int check = -1;
    for (int i =0;i<=counter;i++){
        if (str[i]=='\0'){
            printf("Given string is palindrome!");
        }
        if (str[i]!=str[counter-1-i]){
            printf("Given string is not palindrome!");
            break;
        }
        
    }
}