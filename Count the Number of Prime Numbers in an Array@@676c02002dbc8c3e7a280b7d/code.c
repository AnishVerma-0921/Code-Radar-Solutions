#include<stdio.h>
bool prime(int n){
    if(n<=1){
        return false;
    }
    for(int i>=2;i*i<=n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        if(prime(arr[i])=='true'){
            int aka=0;
            aka++;
        }
    }printf("%d",aka);
}