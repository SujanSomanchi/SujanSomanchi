
#include<stdio.h>
#include <math.h>
int main(void)

{
  float a,b,c,r1,r2,d;
  scanf("%f%f%f",&a,&b,&c);
  d=b*b-4*a*c;

  if(d==0)
  {
printf("the roots are real and equal");
r1=-b/(2*a);
r2=-b/(2*a);
printf("root1=%f",r1);
printf("root2=%f",r2);
  }
else
if(d>0)
{
printf("the roots are real");
r1=-b+sqrt(d)/(2*a);
r2=-b+sqrt(d)/(2*a);
printf("root1=%f",r1);
printf("root2=%f",r2);
}
else
if(d<0)
{
  printf("the roots are imaginary");
}
}
