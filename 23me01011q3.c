#include <stdio.h>

int linearSearch(int *arr, int size, int search);

int main() {
    int size, search;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter the elements of the array: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &search);

    int position = linearSearch(arr, size, search);

    if (position == -1) {
        printf("Not found\n");
    } else {
        printf("%d is present at %d position\n", search, position + 1);
    }

    return 0;
}

int linearSearch(int *arr, int size, int search) {
    for (int i = 0; i < size; i++) {
        if (*(arr + i) == search) {
            return i;
        }
    }

    return -1;
}
