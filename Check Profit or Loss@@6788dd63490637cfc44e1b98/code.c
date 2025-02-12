// Your code here...
#include<stdio.h>
int main(){
    int x,y;
    scanf("%d%d",&x,&y);
    if((x-y)<0){
        printf("Profit");
    }
    else if((x-y)>0){
        printf("Loss");
    } 
    else{
        printf("No Profit No Loss");
    }
}