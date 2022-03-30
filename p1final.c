#include <stdio.h>
void input(float *base,float *height)
{
  printf("enter the base and height of the triangle :\n");
  scanf("%f%f",base,height);
}

void find_area(float base,float height,float *area)
{
  *area = (base * height)/2;
}

void output(float base,float height,float area)
{
  printf("the area of the triangle with base %f and height %f is %f \n",base,height,area);
}

int main()
{
  float b,h,result;
  input(&b,&h);
  find_area(b,h,&result);
  output(b,h,result);
  return 0;
}