#include<stdio.h>
//Find the second digit of fractional part.Input-364.287,Output-8
int main()
{
    float a,y;
    int x,z;
    printf("Enter a number");
    scanf("%f",&a); //364.287
    x=a; //364
    y=a-x; //0.287
    z=(y*100); //28
    z=z%10; //8
    printf("%d",z);
    return 0;
}