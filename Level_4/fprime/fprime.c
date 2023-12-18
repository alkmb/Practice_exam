#include <stdio.h>
#include <stdlib.h>

int main (int argc, char **argv)
{
  if (argc != 2)
    printf("\n");
  else 
  {
    int i = 1;
    int n = 0;
    n = atoi(argv[1]);
    if (n == 1)
      printf("1");
    while (n >= ++i)
    {
      if (n % i == 0)
      {
        printf("%d", i);
        if (n == i)
          break;
        printf("*");
        n /= i;
        i = 1;
      }
    }
    printf("\n");
  }
}
