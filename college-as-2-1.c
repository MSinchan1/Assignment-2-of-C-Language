#include<stdio.h>
//Find the first digit of fractional part. Input 12.347,Output-3
int main()
{
    float a,b;
    int p,q;
    printf("Enter a number");
    scanf("%f",&a); //12.314
    p=a;//12
    b=a-p; //0.314
    q=10*b; //3
    printf("%d",q);
    return 0;
}
