#include <stdio.h>

int main(){
    printf("Viraj Vikram Singh - 25/B08/054\n");
    int principal,roi,time,simpleInterest;
    printf("Enter principal amount: ");
    scanf("%d",&principal);
    printf("Enter rate of interest: ");
    scanf("%d",&roi);
    printf("Enter time period: ");
    scanf("%d",&time);

    simpleInterest = (principal*roi*time)/100;

    printf("Interest: %d",simpleInterest);

}
// Viraj Vikram Singh - 25/B08/054