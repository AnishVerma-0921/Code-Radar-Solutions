#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int k;
    scanf("%d",&k);
    for(int i=0;i<n;i++){
        arr[i]=n[n-1-i];
        
    }
    for(int i=0;i<n;i++){
        printf("%d\n",arr[i]);
    }



}