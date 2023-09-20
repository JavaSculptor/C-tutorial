//swapping 2 no
#include<stdio.h>
int main(){
    int a,b,temp;
    printf("Enter 2 no:");
    scanf("%d%d",&a,&b);
    printf("Before swapping:\na=%d\nb=%d",a,b);
    temp=a;
    a=b;
    b=temp;
    printf("\nAfter swapping:\na=%d\nb=%d",a,b);
    return 0;
}