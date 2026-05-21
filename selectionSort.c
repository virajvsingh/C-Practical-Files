#include <stdio.h>
int inputArr(int *ptr,int len);

int main(){
    int len;
    printf("Viraj Vikram Singh - 25/B08/054\n");
    printf("Enter the length of array: ");
    scanf("%d",&len);
    int arr[len];
    int *ptr = &arr[0];
    inputArr(ptr,len);

    for(int i=0;i<len-1;i++){
        int smallestNum = arr[i];

        for(int j=i;j<len;j++){
            if (arr[j]<smallestNum){
                smallestNum = arr[j];
                arr[j] = arr[i];
                arr[i] = smallestNum; 
            }

        }

    }

    printf("\n");

    for (int m=0;m<len;m++){
        printf("%d ",arr[m]);
    }
}

int inputArr(int *ptr, int len){
    
    for (int i=0;i<len;i++){
        printf("Enter element at %d: ",i);
        scanf("%d",&ptr[i]);
    }
    return 0;
}