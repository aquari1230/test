#include <stdio.h>
#include <math.h>
#define I 30
#define J 10

int func(int a, int b);

int main(void)
{
  int i, j, ans1 = 0;
  double ans2 = 0;

  for(i = 0 ; i <= I ; i++)
  {
    for(j = 0 ; j <= J ; j++)
    {
      ans1 += i * j;

      ans2 += cos(i * j);
    }
  }

  printf("ans1 = %d ans2 = %f\n", ans1, ans2);

  return 0;
}

int func(int a, int b)
{
  return i * j;
}
