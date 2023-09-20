//int/float=float
#include<stdio.h>
int main(){
    int i;
    float f,r;
    printf("Enter int and float no:");
    scanf("%d%f",&i,&f);
    r=i*f;
    printf("%d*%f=%f",i,f,r);
    return 0;
}