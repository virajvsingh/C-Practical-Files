#include <stdio.h>

int main(){
    printf("Viraj Vikram Singh - 25/B08/054\n");
    int num,max;
    printf("Enter 10 numbers: ");
    scanf("%d",&max);

    for(int i=1;i<10;i++){
        scanf("%d",&num);

        if(num>max){
            max=num;
        }
        
    }

    printf("Greatest number: %d",max);
    return 0;
}
// Viraj Vikram Singh - 25/B08/054