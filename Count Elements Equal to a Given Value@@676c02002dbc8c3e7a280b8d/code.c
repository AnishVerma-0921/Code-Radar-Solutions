#include <stdio.h>

int main() {
    int arr[100], n, K, count = 0;
    
    // Input the number of elements
    
    scanf("%d", &n);
    
    // Input array elements
    printf("%d", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Input the value to search for
    
    scanf("%d", &K);
    
    // Count occurrences of K
    for(int i = 0; i < n; i++) {
        if(arr[i] == K) {
            count++;
        }
    }
    
    // Print the result
    printf("%d%d ", K, count);
    
    return 0;
}