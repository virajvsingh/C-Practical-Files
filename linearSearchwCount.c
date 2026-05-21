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
    findVal(ptr,len,val);

}

int inputArr(int *ptr, int len){
    
    for (int i=0;i<len;i++){
        printf("Enter element at %d: ",i);
        scanf("%d",&ptr[i]);
    }
    return 0;
}

int findVal(int *ptr, int len, int val){
    int counter = 0;
    for (int i=0;i<len;i++){
        if (ptr[i]==val){
            printf("Given value found at %d index\n",i);
            counter++;
        }
    }
    printf("Given value was found %d times!",counter);
}
