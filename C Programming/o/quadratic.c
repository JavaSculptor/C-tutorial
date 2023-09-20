//find squareroot of quadratic equation 
#include<stdio.h>
int main(){
    int a,b,c;
    float x1,x2;
    printf("Enter coefficient of quadratic equation:");
    scanf("%d%d%d",&a,&b,&c);
    x1=(-b+pow((b*b-4*a*c),0.5))/(2*a);
     x2=(-b-pow((b*b-4*a*c),0.5))/(2*a);
     printf("roots of quadratic equations are: %f and %f",x1,x2);
     return 0;
}