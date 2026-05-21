#include <stdio.h>

int main(){
    printf("Viraj Vikram Singh - 25/B08/054\n");
    char str1[20], str2[20];
    printf("Enter string1: ");
    scanf("%s",str1);
    printf("Enter string2: ");
    scanf("%s",str2);
    int counter = 0,check =0;

    while (str1[counter]!='\0' || str2[counter]!='\0'){
        if (str1[counter]!=str2[counter]){
            if(str1[counter]>str2[counter]){
                printf("String1 is greater!");
                check =1;
                break;
            }
            else{
                printf("String2 is greater!");
                check =1;
                break;
            }
        }
        counter++;
        
    }
    if (check==0){
        printf("Both strings are equal!");
    }
}