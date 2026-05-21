#include <stdio.h>

int main(){
    printf("Viraj Vikram Singh - 25/B08/054\n");
    int rows;

    printf("Enter number of rows: ");
    scanf("%d",&rows);

    for (int i=0;i<rows;i++){
        for (int j=1;j<=i+1;j++){
            printf("*");
        }
        printf("\n");
    }
}
// Viraj Vikram Singh - 25/B08/054