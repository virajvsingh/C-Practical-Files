#include <stdio.h>

int main(){
    printf("Viraj Vikram Singh - 25/B08/054\n");
    long num,sum=0;
    printf("Enter a 5-digit number: ");
    scanf("%li",&num);

    while (num != 0){
        sum += num%10;
        num = num/10;
    }

    printf("Sum of digits: %li",sum);
}
// Viraj Vikram Singh - 25/B08/054