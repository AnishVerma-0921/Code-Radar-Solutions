#include<stdio.h>
int main(){
    int x,i=0,j=0;
    scanf("%d",&x);
    while(i<=x){
        j=i+i;
        i++;
        printf("%d",j);
    }
}