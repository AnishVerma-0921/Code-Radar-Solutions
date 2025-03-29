#include<stdio.h>
int prime(int n){
    if(n<=1){
        return ' ';
    }
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            return ' ';
        }
    }
    return 1;
}
int main(){
    int n,aka=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        if(prime(arr[i])==1){
            aka=aka+1;
            
        }
    }
    printf("%d",aka);
}