#include <stdio.h>

int countValue(int array[], int size, int value) {
    int count = 0;
    for(int i = 0; i < size; i++) {
        if(array[i] == value) {
            count++;
        }
    }
    return count;
}

int main() {
    int arr[100], n, K;
    
    printf("Enter number of elements (1-100): ");
    scanf("%d", &n);
    
    if(n < 1 || n > 100) {
        printf("Invalid input! Size must be 1-100.\n");
        return 1;
    }
    
    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++) {
        printf("Element %d: ", i+1);
        scanf("%d", &arr[i]);
    }
    
    printf("Enter value to count: ");
    scanf("%d", &K);
    
    int occurrences = countValue(arr, n, K);
    printf("The value %d appears %d time(s).\n", K, occurrences);
    
    return 0;
}