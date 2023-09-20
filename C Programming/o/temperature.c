//temperature converter from farenheit to celsius
#include<stdio.h>
int main(){
    float c,f;
    printf("Enter temperature in farenheit:");
    scanf("%f",&f);
    c=(f-32)/1.8;
    printf("%f Farenheit = %f Celsius",f,c);
    return 0;
}