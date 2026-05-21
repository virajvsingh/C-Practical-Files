#include <stdio.h>
#include <math.h>

int matAdd(int *ptr,int *ptr2, int *ptr3);
int matFill(int *ptr);

int main(){
    printf("Viraj Vikram Singh - 25/B08/054\n");
    int matrix1[3][3];
    int matrix2[3][3];
    int matrixSum[3][3];

    int *ptr1 = (int *)matrix1;
    int *ptr2 = (int *)matrix2;
    int *ptr3 = (int *)matrixSum;

    printf("Enter values to matrix 1: \n");
    matFill(ptr1);
    printf("Enter values to matrix 2: \n");
    matFill(ptr2);

    matAdd(ptr1,ptr2,ptr3);
    printf("Array: \n");
    for (int i=0;i<=2;i++){
        printf("[ ");
        for (int j=0;j<=2;j++){
            printf("%d ",matrixSum[i][j]);
        }
        printf("]\n");
    }

}

int matFill(int *ptr){
    int temp;
    for (int i=0;i<=2;i++){
        for (int j=0;j<=2;j++){
            printf("Enter value at [%d][%d]: ",i,j);
            scanf("%d",&temp);
            *(ptr+i*3+j) = temp;
        }
    }
}

int matAdd(int *ptr,int *ptr2, int *ptr3){
    for (int i=0;i<=2;i++){
        for (int j=0;j<=2;j++){
            *(ptr3+i*3+j) = *(ptr+i*3+j)+*(ptr2+i*3+j);            
        }
    }
}