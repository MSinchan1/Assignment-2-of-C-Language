#include<stdio.h>
//Exchange two digits before decimal.input-364.287,Output-346.287
int main()
{
    float a,b;
    int x;
    printf("Enter number");
    scanf("%f",&a); //364.287
    x=a;//364
    b=((x/100)*10+x%10)*10+(x%100)/10+a-x; //3*10+4)*10+6+0.287=346.287
    printf("%.3f",b); //346.287
    return 0;
}