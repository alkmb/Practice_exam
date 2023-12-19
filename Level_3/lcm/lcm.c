#include <stdio.h>
#include <stdlib.h>

unsigned int    lcm(unsigned int a, unsigned int b)
{
  unsigned int n = 0;
  if (a == 0 || b == 0)
    return 0;
  if (a > b)
    n = a;
  else 
    n = b;
  while(1)
  {
    if (n % a == 0 || n % b == 0)
      return n;
    ++n;
  }
}

int main(int argc, char **argv)
{
  if (argc != 3)
    printf ("\n");
  else 
  {
    int n1 = 0;
    int n2 = 0;
    int res = 0;

    n1 = atoi(argv[1]);
    n2 = atoi(argv[2]);
    res = lcm(n1, n2);
    printf ("%d", res);
  }
}
