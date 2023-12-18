#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>


size_t  ft_strcspn(char *str, char *str2)
{
    int i = 0;
    int j = 0;

    while (str[i])
    {
      j = 0;
      while (str2[j])
      {
        if (str[i] == str2[j])
          return (i);
        j++;
      }
      i++;
    }
    return (i);
}

int main(int argc, char **argv)
{
  size_t res;

  res = 0;
  if (argc != 3)
    write (1, "\n", 1);
  else {
    res = ft_strcspn(argv[1], argv[2]);
    printf("this number of bytes %zu are not in second string", res);
  }
}
