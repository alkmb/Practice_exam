#include <unistd.h>
#include <stdio.h>

int ft_strlen(char *str)
{
  int i = 0;

  while (str[i])
    i++;
  return i;
}

int main(int argc, char **argv)
{
  if (argc != 2)
    write (1, "\n", 1);
  else
  {
    int n = 0;
    n = ft_strlen(argv[1]);
    printf ("%d", n);
  }
}
