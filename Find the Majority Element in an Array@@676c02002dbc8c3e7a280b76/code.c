#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int fre[n];
    for(int i=0;i<n;i++){
        fre[i]=-1;
    }
    for(int i=0;i<n;i++){
        int count=0;
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
                fre[j]=0;
            }
        }
        if(fre[i]!=0){
            fre[i]=count;
        }
        
    }
    
    for(int i=0;i<n;i++){
        if(fre[i]!=0){
            printf("%d",arr[i]);
        }
    }
}