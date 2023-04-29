#include<stdio.h>
//Double the digit after decimal. Input 364.287,Output -364.487(assume<5)
int main()
{
    float a,b,c,d;
    int x,y;
    printf("Enter number");
    scanf("%f",&a); //364.287
    x=a; //364
    b=(a-x)*10; //2.87
    y=b; //2
    c=b-y; //0.87
    b=y*2; //4
    d=x+b/10+c/10;
    printf("%f",d);
    return 0;
}