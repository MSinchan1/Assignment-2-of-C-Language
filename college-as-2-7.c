#include<stdio.h>
//Insert 1 as digit before decimal.Input 364.287,output 3641.287
int main()
{
    float a,b;
    int x;
    printf("Enter number");
    scanf("%f",&a); //364.287
    x=a;
    b=x*10+1+a-x;
    printf("%.3f",b); //364*10+1+364.287-364
    return 0;
}