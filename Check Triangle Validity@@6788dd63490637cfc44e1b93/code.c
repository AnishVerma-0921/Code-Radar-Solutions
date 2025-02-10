#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a,b,c,h,k,l;
    scanf("%f%f%f",&a,&b,&c);
    k=a+b;
    h=b+c;
    l=a+c;
    if((h>a || k>c || l>b){
        printf("Valid");
    }
    else {
        printf("Invalid");
    }
}