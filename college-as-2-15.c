#include<stdio.h>
/*Delete kth digit after decimal.Input-3452.3156735 For k=3 output 3452.316735.*/
int main()
{
 float a,b,c,d;
 int x,y,k,l,m,z,count=0;
 printf("Enter a number and a integer");
 scanf("%f%d",&a,&k);//3452.316735,3
 z=a; //3452
 c=a-z; //0.316735
 for(int i=1;i<=k;i++)
 {
  c=c*10;
 } //316.735
 l=c; //316
 b=c-l; //0.735
 x=c/10;//31
 d=x; //31.000000
 while(x>0)
 {
  x=x/10;
  count++;
 } //count=2
 for(int i=1;i<=count;i++)
{
  d=d*0.1;
  b=b*0.1;
} //0.31 , 0.00735
 printf("%.6f",z+d+b); ////3452+0.31+0.00735=3452.316......
 return 0;
}