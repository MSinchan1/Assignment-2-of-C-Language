#include<stdio.h>
//Insert 1 as first digit of fraction part. Input-12.34,output-12.134
int main()
{
    float a,b,c;
    int p;
    printf("Enter a number"); 
    scanf("%f",&a); //12.34
    p=a; //12
    b=a-p; //0.34
    c=p+0.1+b/10; //12+0.1+0.034
    printf("%.3f",c); // 12.134
    return 0;   
}