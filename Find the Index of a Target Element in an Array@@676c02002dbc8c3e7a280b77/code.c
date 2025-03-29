#include<stdio.h>
int main(){
    int n,ak;
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
        else if(k!=arr[i]){
            ak='-1';
            break;
            printf("-1");
        }
        
    }

    
}