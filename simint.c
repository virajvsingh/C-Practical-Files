#include <stdio.h>

int main() {
    int principal = 20000;
    float roi = 7.25;
    float time = 3.5;

    float simint = (principal * roi * time)/100;
    printf("Simple Interest: %.2f",simint);
}
