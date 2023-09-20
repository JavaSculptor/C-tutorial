// calculate factorial
# include<stdio.h>
int main(){
int n,i,f;
printf("Enter no:");
scanf("%d",&n);
for(i=1, f=1;i<=n;i++)
{
    f=f*i;
    printf("\n%d*%d=%d\n",f,i,f);
}
printf("factorial=%d\n",f);
return 0;
}