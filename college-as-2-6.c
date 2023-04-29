#include<stdio.h>
// Delete second digit after decimal.Input-364.287,Output-364.27
int main()
{
    float x,a,y;
    int b,c,d;
    printf("Enter number");
    scanf("%f",&a); //364.287
    b=a; //364
    x=a-b; //0.287 decimal part
    x=x*100; //28.7
    c=x; //28
    y=x-c; //0.7
    x=c/10; //2
    x=b+x/10+y/10; //364+2/10+.7/10=364.27
    printf("%.2f",x); //2
    return 0;
}