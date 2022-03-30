#include<stdio.h>

struct _triangle
{
  float base,altitude,area;
};
typedef struct _triangle Triangle;

Triangle input_triangle()
{
  Triangle t;
  printf("enter the base and altitude of the triangle:\n");
  scanf("%f %f",&t.base,&t.altitude); 
  return t;
}

void find_area(Triangle *t)  //since we have passed a pointer we have used " -> " instead of " . "//
{
  t->area = (t->base * t->altitude)/2 ;
}

void output(Triangle t)//since here "t" is just a structure variable not a pointer hence we used dot " . "//
{
  printf("the area of the triangle with base = %f and altitude = %f is %f\n",t.base,t.altitude,t.area);
}

int main()
{
  Triangle x;
  x=input_triangle();
  find_area(&x); //since we have passed a pointer "*t" hence we have passed here variable with address that is &x//
  output(x);
  return 0;
}