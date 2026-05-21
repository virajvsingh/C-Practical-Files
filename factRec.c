#include <stdio.h>
int fact(int num, int fact);

int main(){
    printf("Viraj Vikram Singh - 25/B08/054\n");
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);

    int factorial = fact(num,1);
    printf("Factorial: %d",factorial);

}

int fact(int num,int temp){
    if (num==1){
        return temp;
    }
    else{
        fact(num-1,temp*num);
    }
}

// Viraj Vikram Singh - 25/B08/054