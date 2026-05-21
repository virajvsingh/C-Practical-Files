#include <stdio.h>
#include <string.h>

int main(){
    printf("Viraj Vikram Singh - 25/B08/054\n");
    char str[100];
    printf("Enter text: ");
    scanf("%s",&str);

    char revStr[strlen(str)+1];
    for (int i=0;i<strlen(str);i++){
        revStr[i] = str[strlen(str)-i-1];
    }
    revStr[strlen(str)] = '\0';

    printf("%s",revStr);
}