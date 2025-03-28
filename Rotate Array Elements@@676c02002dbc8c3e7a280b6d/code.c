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
    for(int i=0;i<k;i++){
        arr[i]=arr[n-i-1];
    }
    for(int i=0;i<n;i++){
        printf("%d\n",arr[i]);
    }



}