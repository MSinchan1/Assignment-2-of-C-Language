#include<stdio.h>
// Delete first digit after decimal.Input 364.287, output-364.87 
int main()
{
    float a,x;
    int b,c;
    printf("Enter a number");
    scanf("%f",&a); //364.287
    b=a;
    x=a-b; //0.287 decimal part
    x=x*10; //2.87
    c=x;
    x=x-c; //2.87-2=0.87
    printf("%.2f",b+x); //364+0.87=364.87
    return 0;
}