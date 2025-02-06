#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    float radius,area;
    scanf("%f",&radius);
    area=(3.14)*radius*radius;
    scanf("%f",&area);
    printf("Area: %.2f",area);

}