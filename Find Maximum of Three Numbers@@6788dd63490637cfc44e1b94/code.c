#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int x,y,z;
    scanf("%d%d%d",&x,&y,&z);
    if(x>y && x>z){
        printf("%d",x);
    }
    else if(y>z && y>x){
        printf("%d",y);
    }
    else if(z>x && z>y){
        printf("%d",z);
    }
    else if(x==y==z){
        printf("%d",x);
    }
}