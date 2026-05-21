#include <stdio.h>

void sortArr(int *arr,int len){
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
}

int main(){
    printf("Viraj Vikram Singh - 25/B08/054\n");
    printf("Enter length of array: ");
    int len;
    scanf("%d",&len);
    int arr[len];

    for (int i=0;i<len;i++){
        printf("Enter value at [%d]: ",i);
        scanf("%d",&arr[i]);
    }

    int *ptr = &arr[0];
    sortArr(ptr,len);

    printf("Enter value to be found: ");
    int value;
    scanf("%d",&value);

    int min=0,max=len-1,mid=(min+max)/2;

    for (int m=0;m<len;m++){
            printf("%d ",arr[m]);
        }
    int found = -1;
    while (min <= max){
        if (arr[mid]==value){
            found = mid;
            break;
        }
        else if(value>arr[mid]){
            min=mid+1;
           
        }
        else{
            max = mid-1;
        }
         mid = (min+max)/2;

    }

    if (found==-1){
        printf("\nValue not present in array!");
    }
    else{
        printf("\nValue at %d",found);
    }

}