#include <stdio.h>

int arrSum(int *ptr,int len);

int main(){
    printf("Viraj Vikram Singh - 25/B08/054\n");
    int len;
    printf("Enter length of array: ");
    scanf("%d",&len);
    int arr[len];
    int *ptr = &arr[0];

    for (int i=0;i<len;i++){
        printf("Enter value at %d: ",i);
        scanf("%d",&arr[i]);
    }
    printf("Array: ");
    for (int i=0;i<len;i++){
        printf("%d ",arr[i]);
    }

    int sum = arrSum(ptr,len);
    printf("\nSum of elements are: %d",sum);

}

int arrSum(int *ptr,int len){
    int sum=0;
    for (int i=0;i<len;i++){
        sum+= *(ptr+i);
    }

    return sum;
}