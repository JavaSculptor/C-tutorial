//reverse a 2 digit no
#include<stdio.h>
int main(){
    int n,d1,d2;
    printf("Enter 2 digit no:");
    scanf("%d",&n);
    d1=n%10;
    d2=n/10;
    printf("Reverse=%d%d",d1,d2);
    return 0;
}