#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int k;
    scanf("%d",&k);
    for(int i=0;i<n;i++){
        if(k==arr[i]){
            printf("%d",i);
            break;
            
        }
        else if(k==arr[i] && k==arr[i+1]){
            printf("0");
            break;
            
        }
        for(int j=0;j<n;j++){
            if(arr[i]!=k){
                printf("-1");
            }
        }
        
        
    }

    
}