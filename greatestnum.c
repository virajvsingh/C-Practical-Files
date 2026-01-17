#include <stdio.h>

int main() {
    int num1,num2,num3,num4,num5;
    num1 = 45;
    num2 = 63;
    num3 = 325;
    num4 = 563;
    num5 = 86;

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