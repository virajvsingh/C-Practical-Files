#include <stdio.h>
void swapNum(int *ptr1,int *ptr2);

int main(){
    printf("Viraj Vikram Singh - 25/B08/054\n");
    int num1,num2;
    printf("Enter number1: ");
    scanf("%d",&num1);
    printf("Enter number2: ");
    scanf("%d",&num2);

    int *ptr1 = &num1;
    int *ptr2 = &num2;

    swapNum(ptr1,ptr2);
    printf("Number 1: %d\n",num1);
    printf("Number 2: %d",num2);
}

void swapNum(int *ptr1,int *ptr2){
    int temp;
    temp = *ptr2;
    *ptr2 = *ptr1;
    *ptr1 = temp;
}
