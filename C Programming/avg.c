//calculate average of 3 no
#include<stdio.h>
int main(){
    int a,b,c;
    float avg;
    printf("Enter 3 no:");
    scanf("%d%d%d",&a,&b,&c);
    avg=(a+b+c)/3.0;
    printf("Average=%f",avg);
    return 0;
}