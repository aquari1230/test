#include <stdio.h>
#define I 30
#define J 10

int func(int a, int b);

int main(void)
{
  int i, j, ans = 0;

  for(i = 0 ; i <= I ; i++)
  {
    for(j = 0 ; j <= J ; j++)
    {
      ans += i * j;
    }
  }

  printf("ans = %d\n", ans);

  return 0;
}

int func(int a, int b)
{
  return i * j;
}
