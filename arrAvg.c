#include <stdio.h>

float arrAvg(int *ptr,int len);

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

    float avg = arrAvg(ptr,len);
    printf("\nAverage of elements are: %f",avg);

}

float arrAvg(int *ptr,int len){
    int sum=0;
    for (int i=0;i<len;i++){
        sum+= *(ptr+i);
    }
    float avg = (float)sum/(float)len;

    return avg;
}