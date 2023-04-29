#include<stdio.h>
//Sum of digits around decimal. Input 364.287,Output-4+2=6
int main()
{
    float a;
    int x,y,z;
    printf("Enter number");
    scanf("%f",&a); //364.287
    x=a*10; //3642
    y=(x%100)/10; //4
    x=x%10; //2
    z=x+y;
    printf("%d",z); //4+2=6
    return 0;
}