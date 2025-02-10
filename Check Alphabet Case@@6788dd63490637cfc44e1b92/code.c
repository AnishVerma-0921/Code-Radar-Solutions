#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char c;
    scanf("%c",&c);
    if (c=="A,S,D,F,G,H,J,K,L,X,C,V,B,N,M,Q,W,E,R,T,Y,U,I,O,P"){
        printf("Uppercase");
    }
    else if(c=="a,s,d,f,g,h,j,k,l,z,x,c,v,b,n,m,q,w,e,r,t,y,u,i,o,p"){
        printf("Lowercase");
    }
    else{
        printf("Not an alphabet");
    }

}