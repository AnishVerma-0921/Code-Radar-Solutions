#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<=n-1;i++){
        for(int j=0;j<=i;j++){
            printf("* ");
        }
        printf("\n");
    }
}