#include <unistd.h>

void  ft_putstr(char *str)
{
  int i = 0;
  while (str[i])
    write (1, &str[i++], 1);
}

int main (int argc, char **argv)
{
  if (argc == 2)
    ft_putstr(argv[1]);
  write (1, "\n", 1);
}
