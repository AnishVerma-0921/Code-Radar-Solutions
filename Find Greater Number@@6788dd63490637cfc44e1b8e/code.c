#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int x,v;
    scanf("%d%d",&x,&v);
    if(x>v){
        printf("%d",x);
    }
    else if(v>x){
        printf("%d",v);
    }
    else{
        printf("0")
    }
}