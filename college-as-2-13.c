#include<stdio.h>
//Find the sum of first k digits after decimal.Input-3452.3156735,k=3,Output-3+1+5=9
int main()
{
    float a;
    int x,y,k,sum=0;
    printf("Enter number and a integer");
    scanf("%f%d",&a,&k); //3452.3156735,3
    y=a;//3452
    a=a-y; //0.3156735
    for(int i=0;i<k;i++)
    {
        x=a*10; //3
        a=a*10-x; //3.156735-3=0.156735
        sum=sum+x; //0+3+....+5
    }
    printf(" Sum of the digits %d",sum);
    return 0;
}