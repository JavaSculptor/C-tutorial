//operation on bitwise operator
#include<stdio.h>
int main(){
    int x,y;
    printf("enter 2 no:");
    scanf("%d%d",&x,&y);
    printf("\n%d AND %d = %d",x,y,(x&y));
    printf("\n%d OR %d = %d",x,y,(x|y));
    printf("\n%d EXOR %d = %d",x,y,(x^y));
    printf("\nNOT of %d = %d",x,~x);
    printf("\nNOT of %d = %d",y,~y);
    return 0;
}