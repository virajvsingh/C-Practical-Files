#include <stdio.h>
#include <string.h>


int main(){
    printf("Viraj Vikram Singh - 25/B08/054\n");
    char str1[100],str2[100];
    printf("Enter first string: ");
    scanf("%s",&str1);
    printf("Enter second string: ");
    scanf("%s",&str2);
    
    char concatStr[strlen(str1)+strlen(str2)+1];
    int counter = 0 ;

    for (int i=0;i<strlen(str1);i++){
        concatStr[counter] = str1[i];
        counter++;
    }

    for (int i=0;i<strlen(str2);i++){
        concatStr[counter] = str2[i];
        counter++;
    }

    concatStr[counter] = '\0';

    printf("Concatinated string: %s", concatStr);

    

}