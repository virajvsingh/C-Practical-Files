#include <stdio.h>

int main() {
    float principal, roi, time;
    printf("Enter principal amount: \n");
    scanf("%f",&principal);
    printf("Enter rate of interest: \n");
    scanf("%f",&roi);
    printf("Enter time period(in years): \n");
    scanf("%f",&time);

    float simint = (principal*roi*time)/100;

    printf("Simple interest: %.2f",simint);
}