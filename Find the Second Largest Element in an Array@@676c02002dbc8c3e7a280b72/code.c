#include<stdio.h>
void sec(int arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
            
        }
    }
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    sec(arr,n);
    if(n>1 && n!=3){
        printf("%d",arr[n-2]);
    }
    else if(n==1||n==3){
        printf("-1");
    }

}