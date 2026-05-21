#include <stdio.h>

int fibonacci(int len, int *ptr);
void printArr(int len, int *ptr);

int main(){
    printf("Viraj Vikram Singh - 25/B08/054\n");
    int len;
    printf("Enter number of terms: ");
    scanf("%d",&len);
    int fiboArr[len];
    fiboArr[0] = 0;
    if (len>=2){
        fiboArr[1] = 1;
    }
    int *ptr = &fiboArr[0];

    fibonacci(len, ptr);
    printArr(len, ptr);
}

int fibonacci(int len, int *ptr){
    if (len>2){
        for (int i=2;i<len;i++){
            ptr[i] = ptr[i-1]+ptr[i-2];
        }
    }
    return 0;
}

void printArr(int len, int *ptr){
    for(int i =0;i<len;i++){
        printf("%d ",ptr[i]);
    }
}