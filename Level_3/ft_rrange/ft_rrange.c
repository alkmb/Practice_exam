#include <stdio.h>
#include <stdlib.h>

int     *ft_rrange(int start, int end)
{
  int i = 0;
  int step = 1;
  int len = (start - end) + 1;
  if (len < 0)
    len *= -1;
  len++;
  int *res = (int *)malloc((len + 1) * sizeof(int));

  if (res)
  {
    if (start < end)
      step = -1;
    while (i < len)
    {
      res [i] = end;
      end = end + step;
      i++;
    }
  }
  return (res);
}

int main(void)
{
    int *res;

    res = ft_rrange(1, 3);
    while (*res)
      printf("%d ", *res++);
}
