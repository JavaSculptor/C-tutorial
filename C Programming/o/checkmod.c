//to display first 10 natural number
# include<stdio.h>
int main(){
    int i=0,n=1;
    while (i<10)
    {
        if (n%5==0 && n%8==0)
        {
            printf("%d\n",n);
            i++;
        }
        n++;
         
    }
    return 0;
}