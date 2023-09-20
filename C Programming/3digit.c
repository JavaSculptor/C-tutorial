//separate a 3 digit no
#include<stdio.h>
int main(){
    int n,d1,d2,d3;
    printf("Enter 3 digit no:");
    scanf("%d",&n);
    d3=n%10;
    d2=(n/10)%10;
    d1=n/100;
    printf("digits are:%d,%d,%d",d1,d2,d3);
    return 0;
}