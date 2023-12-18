#include <unistd.h>
#include <stdio.h>
#include <string.h>

char *ft_strpbrk(char *str, char *accept)
{
  int j;

  while (str)
  {
    j = 0;
    while (accept[j])
    {
      if(*str == accept[j])
        return ((char *) str);
      j++;
    }
    str++;
  }
  return (0);
}

int main(int argc, char **argv)
{
  char *res;

  if (argc != 3)
    write (1, "\n", 1);
  else {
    res = strpbrk(argv[1], argv[2]);
    printf ("The first occurance found is : %s", res);
  }
}
