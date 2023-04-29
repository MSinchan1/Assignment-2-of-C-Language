#include<stdio.h>
//Sum of k digits before decimal.Input-3452.3156735,For k=3 output 2+5+4=11.
int main()
{
    float a;
    int x,y,k,sum=0;
    printf("Enter number and an integer");
    scanf("%f%d",&a,&k); //3452.3156735,3
    x=a; //3452
    for(int i=1;i<=k;i++)
    {
        y=x%10; //2
        x=x/10; //345
        sum=sum+y; //0+2......
    }
    printf("Sum is %d",sum);
    return 0;
    

}