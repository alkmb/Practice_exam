#include <unistd.h>

int ft_strlen(char *str)
{
  int i = 0;

  while (str[i])
    i++;
  return i;
}

void  rev_print(char *str)
{
  int i = ft_strlen(str) - 1;

  while (str[i] == ' ')
    i--;
  while (str[i])
    write (1, &str[i--], 1);
  write (1, "\n", 1);
}

int main(int argc, char **argv)
{
  if (argc != 2)
    write (1, "\n", 1);
  else 
    rev_print(argv[1]);
}
