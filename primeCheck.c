#include <stdio.h>
#include <math.h>

int checkPrime(int num){
    for (int i=2;i<=sqrt(num);i++){
        if (num%i==0){
            printf("Number is not prime!");
            return 1;
        }
    }
    return 0;
}

int main(){
    printf("Viraj Vikram Singh - 25/B08/054\n");
    int num;
    printf("Enter number: ");
    scanf("%d",&num);

    int check = checkPrime(num);
    if (check==0){
        printf("Number is prime!");
    }
    
}