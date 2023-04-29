#include<stdio.h>
//Exchange digits around decimal.input 364.287,output-362.487
int main()
{
    float a,b,c,d;
    int x,y;
    printf("Enter number");
    scanf("%f",&a); //364.287
    a=a*10; //3642.87
    x=a; //3642
    b=(a-x)/10; // * 0.087
    y=x%10; //2
    d=((x%100)/10); //4
    c=((x/100)*10+y)+d/10+b; //((3642/100)*10+2)+4/10+0.087=362.487
    printf("%f",c);
    return 0;
}