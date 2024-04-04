#include <stdio.h>


int lowsearch(int arr[], int num, int size) {
    int low = 0, high = size - 1;
    int result = -1;
    
    
    if (size == 0)
        return result;


    if (arr[0] > arr[size - 1])
        return result;

    while (low <= high) {
        int mid = low + (high - low) / 2;
        
        if (num == arr[mid]) {
            result = mid;
            high = mid - 1;
        } else if (num < arr[mid]) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    return result;
}


int highsearch(int arr[], int num, int size) {
    int low = 0, high = size - 1;
    int result = -1;
    
    
    if (size == 0)
        return result;

    
    if (arr[0] > arr[size - 1])
        return result;

    while (low <= high) {
        int mid = low + (high - low) / 2;
        
        if (num == arr[mid]) {
            result = mid;
            low = mid + 1;
        } else if (num < arr[mid]) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    return result;
}

int main() {
    int arr[] = {10, 2, 2, 3, 2, 3, 4, 4, 2, 5, 5, 1, 6, 6, 6};
    int num = 5;
    int size = sizeof(arr) / sizeof(arr[0]); 
    
    
    if (size == 0) {
        printf("Array is empty\n");
        return 1;
    }
    
    int lsearch = lowsearch(arr, num, size);
    int hsearch = highsearch(arr, num, size);
    
   
    if (lsearch == -1 && hsearch == -1) {
        printf("Number is not found\n");
    } else {
        printf("The first occurrence of element %d is at index %d\n", num, lsearch);
        printf("The last occurrence of element %d is at index %d\n", num, hsearch);
    }
    
    return 0;
}

