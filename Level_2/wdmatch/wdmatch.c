#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void  ft_putstr(char *str)
{
  int i;

  while (str[i])
    write(1, &str[i++], 1);
}

int main(int argc, char **argv)
{
  if (argc == 3)
  {
    int i = 0;
    int j = 0;

    while (argv[2][j])
      if(argv[2][j++] == argv[1][i])
        i++;
    if (!argv[1][i])
      ft_putstr(argv[1]);
  }
  write (1, "\n", 1);
}
