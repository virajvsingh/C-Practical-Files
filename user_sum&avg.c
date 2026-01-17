#include <stdio.h>

int main() {
    int num1,num2,num3,num4,num5;
    printf("Enter values: \n");
    scanf("%d %d %d %d %d",&num1,&num2,&num3,&num4,&num5);

    float sum = num1 + num2 + num3 + num4 + num5;
    printf("Sum: %f",sum);

    float average = sum/5;
    printf("\nAverage: %f",average);
}