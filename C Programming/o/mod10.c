#include<stdio.h>
int main(){
    int n;
    printf("Enter no:");
    scanf("%d",&n);
    if(n%10==0)
    {
        printf("Divided by 10");
    }
    else
    {
        printf("Not divided by 10");
    }
    return 0;
}