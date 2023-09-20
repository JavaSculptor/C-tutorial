//arithmetic instruction
#include<stdio.h>
int main(){
    int x=4,y=9,z;
    z=(x++)+(--y)+y;
    printf("value=%d",z);
    z=(--x)+x+(y--);
    printf("\n value=%d",z);
    return 0;
}