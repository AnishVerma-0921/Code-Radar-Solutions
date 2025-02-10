#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    float a,b,c;
    scanf("%f%f%f",&a,&b,&c);

    if((a>b && a>c) && (b+c)>a){
        printf("Valid");
    }
    else if((b>a && b>c) && (a+c)>b){
        printf("Valid");
    }
    else if((c>a && c>b) && (a+b)>c){
        printf("Valid");
    }
    else{
        printf("Invalid");
    }
}