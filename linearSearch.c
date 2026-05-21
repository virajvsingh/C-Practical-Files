#include <stdio.h>

int inputArr(int *ptr,int len);
int findVal(int *ptr, int len, int val);

int main(){
    printf("Viraj Vikram Singh - 25/B08/054\n");
    int len;
    printf("Enter the length of array: ");
    scanf("%d",&len);
    int arr[len];
    int *ptr = &arr[0];
    inputArr(ptr,len);

    for (int i=0;i<len;i++){
        printf("%d ",arr[i]);
    }

    printf("\nEnter value to be found: ");
    int val;
    scanf("%d",&val);
    int index = findVal(ptr,len,val);

    if (index>=0){
        printf("%d is at %d index",val,index);
    }
    else{
        printf("Value not found!");
    }

}

int inputArr(int *ptr, int len){
    
    for (int i=0;i<len;i++){
        printf("Enter element at %d: ",i);
        scanf("%d",&ptr[i]);
    }
    return 0;
}

int findVal(int *ptr, int len, int val){
    for (int i=0;i<len;i++){
        if (ptr[i]==val){
            return (i);
        }
    }
    return -1;
}
