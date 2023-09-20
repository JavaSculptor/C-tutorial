# include<stdio.h>
int main(){
    int a=2,b=5,c=10;
    printf("value=%d\n",(a+b*-c));
    printf("value=%d\n",(-c/b*c-a));
    printf("value=%d\n",(-a+ ++b%a));
    return 0;
}