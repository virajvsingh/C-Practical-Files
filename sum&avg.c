#include <stdio.h>

int main(void) {
    int num1,num2,num3,num4,num5;
    num1 = 45;
    num2 = 63;
    num3 = 325;
    num4 = 563;
    num5 = 74;

    float sum = num1 + num2 + num3 + num4 + num5;
    printf("Sum: %f",sum);

    float average = sum/5;
    printf("\nAverage: %f",average);
}