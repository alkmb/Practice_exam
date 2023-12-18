#include <stdlib.h>
#include <stdio.h>

int max(int *tab, unsigned int len)
{
  int max;
  int i = 0;

  if (len == 0)
    return 0;
  max = tab[i];
  while (i <len)
  {
    if(max < tab[i])
      max = tab[i];
    i++;
  }
  return max;
}

int main(void)
{
  int tab[100];
  int i = 1;
  int n = 0;
 
  while (i < 99)
  {
    tab [i] = i;
    i++;
  }
  n = max(tab, 100);
  printf ("%d\n", 1);
}
