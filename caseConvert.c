#include <stdio.h>
#include <string.h>


int main(){
    printf("Viraj Vikram Singh - 25/B08/054\n");
    char str[100];
    int option;
    int breaker = 0;

    while (1){
        printf("\nChoose an option: \n"
           "a. Convert to lowercase (Press 1)\n"
           "b. Convert to uppercase (Press 2)\n"
           "c. To exit (Press 3)\n");
    
        scanf("%d",&option);    
    
        switch (option)
        {
        case 1:
            printf("Enter string: ");
            scanf("%s",&str);
            for(int i=0;i<strlen(str);i++){
                if (str[i]>=65 && str[i]<=90){
                    str[i] = str[i] + 32;
                }
            }
            printf("\n%s\n",str);
            break;
        case 2:
            printf("Enter string: ");
            scanf("%s",&str);
            for(int i=0;i<strlen(str);i++){
                if (str[i]>=97 && str[i]<=122){
                    str[i] = str[i] - 32;
                }
            }
            printf("\n%s\n",str);
            break;
        case 3:
            breaker = 1;
            break;
        default:
            printf("\nWrong option entered!");
            break;
        }
        if (breaker == 1){
            break;
        }
    }
}
    
