#include <unistd.h>
#include <stdio.h>


char *ft_strrev(char *str)
{
  int i = -1;
  int len = 0;
  char temp;

  while (str[len])
    len++;
  while (++i < len / 2)
  {
    temp = str[i];
    str[i] = str[len - 1 - i];
    str[len - 1 - i] = temp;
  }
  return (str);
}


int main(int argc, char **argv)
{
  if (argc != 2)
    write (1, "\n", 1);
  else {
    ft_strrev(argv[1]);
    printf ("%s\n", argv[1]);
  }

}
