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
    if(h>a ){
        printf("Valid");
    }
    else if(k>c){
        print("Valid");
    }
     else if(l>b){
        print("Valid");
    }

    else {
        printf("Invalid");
    }
}