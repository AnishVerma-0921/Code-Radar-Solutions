#include<stdio.h>
int main(){
    int x,i,j;
    scanf("%d",&x);
    while(i<=10){
        j=x*i;
        printf("%d x %d = %d\n",x,i,j);
        i++;
    }
}