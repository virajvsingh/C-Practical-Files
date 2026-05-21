#include <stdio.h>
#include <math.h>


int main(){
    printf("Viraj Vikram Singh - 25/B08/054\n");
    int matrix1[3][3];
    int matrix2[3][3];
    int matrixMulti[3][3];

    printf("For matrix 1: \n");
    for (int i=0;i<=2;i++){
        for (int j=0;j<=2;j++){
            printf("Enter value at [%d][%d]: ",i,j);
            scanf("%d",&matrix1[i][j]);
        }
    }
    printf("For matrix 2: \n");
    for (int i=0;i<=2;i++){
        for (int j=0;j<=2;j++){
            printf("Enter value at [%d][%d]: ",i,j);
            scanf("%d",&matrix2[i][j]);
        }
    }

    for (int k =0;k<3;k++){
        for (int m=0;m<3;m++){
            matrixMulti[k][m] =   matrix1[k][0]*matrix2[0][m] 
                                + matrix1[k][1]*matrix2[1][m] 
                                + matrix1[k][2]*matrix2[2][m];
        }
    }

    printf("Array: \n");
    for (int i=0;i<=2;i++){
        printf("[ ");
        for (int j=0;j<=2;j++){
            printf("%d ",matrixMulti[i][j]);
        }
        printf("]\n");
    }

}

