#include <unistd.h>
#include <stdio.h>


char *ft_strchar(char *str, char c)
{
  while (*str)
  {
    if (*str == c)
      return (char *) str;
  ++str;
  }
  return (0);
}

size_t  ft_strspn(char *str, char *str2)
{
  size_t i = 0;

  while (str[i])
  {
    if (ft_strchar(str2, str[i]) == 0)
      break;
    ++i;
  }
  return i;
}

int main (int argc, char **argv)
{
  size_t res = 0;

  if (argc != 3)
    write (1, "\n", 1);
  else {
    res = ft_strspn(argv[1], argv[2]);
    printf ("this number of bytes %zu are in the second string", res);
  }
}
