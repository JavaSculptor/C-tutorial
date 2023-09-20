//find out gross salary based on basic salary
#include<stdio.h>
int main(){
    float b,da,hra,gross;
    printf("Enter a salary:");
    scanf("%f",&b);
    da=50*b/100;
     
    hra=40*b/100;
    gross=b+da+hra;
    printf("total salary is %f",gross);
    return 0;
}