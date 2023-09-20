//find area and perimeter of rectangle
#include<stdio.h>
int main(){
    float l,b,a,p;
    printf("Enter length & breath:");
    scanf("%f%f",&l,&b);
    a=l*b;
    p=2*(l+b);
    printf("area=%f\nperimeter=%f",a,p);
    return 0;
}