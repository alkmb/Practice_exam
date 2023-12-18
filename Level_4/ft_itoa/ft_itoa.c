#include <stdio.h>
#include <stdlib.h>

char *ft_itoa(int nbr)
{
  int n = nbr;
  int len = 0;
  
  while (n)
  {
    n /= 10;
    len++;
  }
  char *res = (char *)malloc((len + 1) * sizeof(char));
  if (nbr == 0)
    return ("0");
  if (nbr < 0)
  {
    res[0] = '-';
    nbr = -nbr;
  }
  while (nbr)
  {
    res[--len] = nbr % 10 + '0';
    nbr /= 10;
  }
  return res;
}

int main(void)
{
  int n = 0;
  char *res;

  res =ft_itoa(n);
  printf("%s\n", res);
}
