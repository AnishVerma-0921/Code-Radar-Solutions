#include<stdio.h>
void rev(int arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            int temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
        }
    }
}
int main(){
    int n,ann;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    rev(arr,n);
    for(int i=0;i<n;i++){
        if(arr[i]==arr[i+1]+1){
            ann=arr[n-1]+1;
            printf("%d",ann);
            break;
        }
    }
}