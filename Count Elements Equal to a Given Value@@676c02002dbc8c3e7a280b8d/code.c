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
    
   
    scanf("%d", &n);
    
    if(n < 1 || n > 100) {
        
        return 1;
    }
    
    printf("%d", n);
    for(int i = 0; i < n; i++) {
        printf("%d: ", i+1);
        scanf("%d", &arr[i]);
    }
    
    
    scanf("%d", &K);
    
    int occurrences = countValue(arr, n, K);
    printf(" %d %d" , K, occurrences);
    
    return 0;
}