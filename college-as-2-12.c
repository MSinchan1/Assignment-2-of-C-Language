#include<stdio.h>
//Sum of the first two digit after decimal. Input-364.287,Output-2+8=10
int main()
{
    int a,b,c;
    float x;
    printf("Enter number");
    scanf("%f",&x); //364.287
    a=x*100; //36428
    b=(a/10)%10; //3642%10=2
    a=a%10; //8
    c=a+b;
    printf("%d",c);
    return 0;
}
