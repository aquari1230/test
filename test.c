#include <stdio.h>

int main(void)
{
  int i, j, ans = 0;

  for(i = 0 ; i <= 30 ; i++)
  {
    for(j = 0 ; j <= 10)
    {
      ans += i * j;
    }
  }

  printf("ans = %d\n", ans);

  return 0;
}
