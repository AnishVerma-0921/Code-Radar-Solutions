#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int x;
    scanf("%d",&x);
    if(x%5==0 && x%11==0){
        printf("Divisible");
    }
    else{
        printf("Not Divisible");
    }
}