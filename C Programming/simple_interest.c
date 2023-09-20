//calculate simple interest
#include<stdio.h>
int main(){
    float p,r,n,si;
    printf("Enter principal amount,rate of interest,no of years:");
    scanf("%f%f%f",&p,&r,&n);
    si=(p*r*n)/100;
    printf("simple interest=%f",si);
    return 0;

}