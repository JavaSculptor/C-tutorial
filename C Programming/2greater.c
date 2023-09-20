//find greater out of 2
#include<stdio.h>
int main(){
    int a,b,x;
    printf("Enter 2 number:");
    scanf("%d%d",&a,&b);
    x=(a>b)?a:b;
    printf("%d is greater",x);
    return 0;
}