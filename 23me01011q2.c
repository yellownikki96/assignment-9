#include <stdio.h>

void swapArray(int *arr1, int *arr2, int size);

int main() {
    int size;
    printf("Enter the size of the arrays: ");
    scanf("%d", &size);
    int arr1[size], arr2[size];

    printf("Enter the elements of the first array: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter the elements of the second array: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr2[i]);
    }

    printf("Before swapping \n");
    printf("First array: ");
    for (int i = 0; i < size; i++) 
    {
        printf("%d ", arr1[i]);
    }

    printf("\nSecond array: ");
    for (int i = 0; i < size; i++)
     {
        printf("%d ", arr2[i]);
    }
    printf("\n");
    
    swapArray(arr1, arr2, size);
    printf("After swapping \n");
    printf("First array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr1[i]);
    }
    printf("\nSecond array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr2[i]);
    }
    printf("\n");
    return 0;
}

void swapArray(int *arr1, int *arr2, int size) {
    int temp;
    for (int i = 0; i < size; i++) {
        temp = *(arr1 + i);
        *(arr1 + i) = *(arr2 + i);
        *(arr2 + i) = temp;
    }
}
