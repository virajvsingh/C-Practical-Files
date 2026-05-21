#include <stdio.h>
#include <math.h>

int main(){
    printf("Viraj Vikram Singh - 25/B08/054\n");
    int num,revNum=0;

    printf("Enter a 5-digit number: ");
    scanf("%d",&num);

    while (num!=0){
        revNum = revNum*10 + num%10;
        num = num/10;
    }

    printf("Reversed number: %d",revNum);
}