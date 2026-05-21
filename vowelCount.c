#include <stdio.h>

int main(){
    printf("Viraj Vikram Singh - 25/B08/054\n");
    char str[20];
    printf("Enter a string: ");
    scanf("%s",&str);
    int counter = 0;
    for(int i=0;i<20;i++){
        if (str[i]=='\0'){
            break;
        }
        else{
            if (str[i]== 'a'||str[i]=='e' ||str[i]=='i' ||str[i]=='o' ||str[i]=='u'){
                counter++;
            }
            else if (str[i]== 'A'||str[i]=='E' ||str[i]=='I' ||str[i]=='O' ||str[i]=='U'){
                counter++;
            }
        }
    }

    printf("Length of the string: %d\n",counter);
}