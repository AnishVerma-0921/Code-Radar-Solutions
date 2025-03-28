#include <stdio.h>

int main() {
    int arr[100], n, K, count = 0;
    
    // Input the number of elements
    printf("Enter the number of elements in the array (max 100): ");
    scanf("%d", &n);
    
    // Input array elements
    printf("Enter %d integers:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Input the value to search for
    printf("Enter the value to count: ");
    scanf("%d", &K);
    
    // Count occurrences of K
    for(int i = 0; i < n; i++) {
        if(arr[i] == K) {
            count++;
        }
    }
    
    // Print the result
    printf("The value %d appears %d times in the array.\n", K, count);
    
    return 0;
}