#include <stdio.h>

int inputArr(int *ptr, int len);

int main() {
    int len;
    printf("Viraj Vikram Singh - 25/B08/054\n");
    printf("Enter the length of array: ");
    if (scanf("%d", &len) != 1 || len <= 0) return 1;

    int arr[len];
    inputArr(arr, len);

    for (int i = 1; i < len; i++) {
        int key = arr[i]; 
        int j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }

    printf("\nSorted Array: ");
    for (int m = 0; m < len; m++) {
        printf("%d ", arr[m]);
    }
    printf("\n");

    return 0;
}

int inputArr(int *ptr, int len) {
    for (int i = 0; i < len; i++) {
        printf("Enter element at %d: ", i);
        scanf("%d", &ptr[i]);
    }
    return 0;
}