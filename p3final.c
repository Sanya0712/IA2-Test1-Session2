#include <stdio.h>
int input_number()
{
  int num;
  printf("enter the number:\n");
  scanf("%d",&num);
  return num;
}

int is_composite(int n)
{
  int i,c;
  c=0;
  i=1;
  while(n>=i)
  {
    if (n%i==0)
    {
      c=c+1;
    }
    i++;   
  }
  return c;
}  

  void output(int n,int composite)
  {
    if (composite>2)
    {
      printf("%d is a composite number \n",n);
    }
    else
    {
      printf("%d is not a composite number\n",n);
    }
  }

  int main()
  {
    int num,result;
    num=input_number();
    result=is_composite(num);
    output(num,result);
    return 0;
  }