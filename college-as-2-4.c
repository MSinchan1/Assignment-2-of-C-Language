#include<stdio.h>
//Delete digit before decimal.Input 364.287,Output 36.287
int main()
{
    int x;
    float a,y,z;
    printf("Enter a number");
    scanf("%f",&a); //364.287
    x=a;
    z=x;
    y=a-z;
    y=y+x/10; //0.287
    printf("%.3f",y);
    return 0;
}
