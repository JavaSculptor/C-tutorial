//find out remainder when n%2 &&3
#include<stdio.h>
int main(){
    int n,x,y;
    printf("Enter an no:",&n);
    scanf("%d",&n);
    x=n%2;
    y=n%3;
   
    printf("\n%d mod 2=%d\n%d mod 3=%d",n,x,n,y);
    return 0;
}