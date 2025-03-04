#include <stdio.h>

void reverseArray(int *arr, int size) {
    int *start = arr;         
    int *end = arr + size - 1; 
    
    while (start < end) {
        int temp = *start;
        *start = *end;
        *end = temp;
        
    
        start++;
        end--;
    }
}

void printArray(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int size;
    

    printf("Enter the number of elements: ");
    scanf("%d", &size);
    
    int arr[size];
    
    printf("Enter %d elements: ", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Original array: ");
    printArray(arr, size);
    
    reverseArray(arr, size);
    
    printf("Reversed array: ");
    printArray(arr, size);
    
    return 0;
}
