//calculate a distance in m,cm,ft,inch
#include<stdio.h>
int main(){
    float km,m,cm,ft,inch;
    printf("Enter distance:");
    scanf("%f",&km);
    m=km*1000;
    cm=m*100;
    ft=cm/30;
    inch=ft*12;
    printf("Distance=%f km=%f m=%f cm=%f ft=%f inch",km,m,cm,ft,inch);
    return 0;
}