#include <stdio.h>

int main() {
    int num1,num2,num3,num4,num5;
    printf("Enter values: \n");
    scanf("%d %d %d %d %d",&num1,&num2,&num3,&num4,&num5);

    int greatestNum = 0;

    if ((num1>num2) || (num1 == num2)) {
        greatestNum = num1;
    }
    else {
        greatestNum = num2;
    }

    if (greatestNum<num3) {
        greatestNum = num3;
    }

    if (greatestNum<num4) {
        greatestNum = num4;
    }

    if (greatestNum<num5) {
        greatestNum = num4;
    }

    printf("Greatest number amongst the given values is: %d",greatestNum);
}