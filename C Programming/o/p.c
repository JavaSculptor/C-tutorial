/* d d
3 3 3
4 4 4 
5 5 5
3 1 */
#include<stdio.h>
int main(){
    int a=2,b=3,ab=4;
    char ch='c';
    printf("%c %c\n",ch,(++ch));
    printf("%d %d %d\n",a,a,(++a));
    printf("%d %d %d\n",b,b,(++b));
    printf("%d %d %d\n",ab,ab,(++ab));
    printf("%d %d",a,(!!b));

    return 0;
}