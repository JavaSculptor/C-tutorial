//find greater no out of 3
#include<stdio.h>
int main(){
    int n1,n2,n3,g;
    printf("Enter 3 no:");
    scanf("%d%d%d",&n1,&n2,&n3);
    g=(n1>n2)?((n1>n3)?n1:n3):((n2>n3)?n2:n3);
    printf("greater no is %d",g);
    return 0;
}