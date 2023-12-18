#include <stdlib.h>
#include <stdio.h>

int     *ft_range(int start, int end)
{
  int i;
  int len = abs((end - start)) + 1;
  int *res = (int *)malloc((len + 1) * sizeof(int));

  while (i < len)
  {
    if (start < len)
    {
      res[i] = start;
      start++;
      i++;
    }
    else
    {
      res[i] = start;
      start--;
      i++;
    }
  }
  return (res);
}

int main(void)
{
  int *res;

  res = ft_range(-1, 2);
  while (*res)
    printf("%d ", *res++);
}
