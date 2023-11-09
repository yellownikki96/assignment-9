#include <stdio.h>

int main() {
    int arr[100], n, *ptr, sum = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter  element %d in the array: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    ptr = arr;

    for (int i = 0; i < n; i++) {
        sum += *(ptr + i);
    }

    printf("The sum of all elements in the array is %d.", sum);

    return 0;
}
