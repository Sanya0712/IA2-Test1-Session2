#include <stdio.h>
int input_array_size()
{
  int n;
  printf("Enter the length of the array:\n");
  scanf("%d", &n);
  return n;
}

void input_array(int n, int a[n])
{
  printf("Enter all values of the array:\n");
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &a[i]);
  }
}

int is_composite(int b)
{
  for (int i = 2; i <= b/2; i++)
  {
    if (b%i == 0)
      return 1;
  }
  return 0;
}
int sum_composite_numbers(int n, int a[n])
{
  int sum = 0;
  for (int i = 0; i < n; i++)
  {
    if (is_composite(a[i]))
    {
      sum = sum + a[i];
    }
  }
  return sum;
}

void out_put(int sum)
{
  printf("the sum of composite numbers in the gives array is : %d\n", sum);
}

int main()
{
  int x;
  x = input_array_size();
  int arr[x];
  input_array(x,arr);
  int result = sum_composite_numbers(x,arr);
  out_put(result);
  return 0;
}