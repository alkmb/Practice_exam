#include <unistd.h>

void  str_capitalizer(char *str)
{
  int i = 0;
  while (str[i])
    if(str[i++] && str[i] >= 'A' && str[i] <= 'Z')
      str[i] += 32;
  i = 0;
  while (str[i])
  {
    if ((str[i] >= 'a' && str[i] <= 'z') && str[i - 1] == ' ')
      str[i] -= 32;
    write (1, &str[i], 1);
    i++;
  }
}

int main (int argc, char **argv)
{
  if (argc <= 1)
    write (1, "\n", 1);
  else 
  {
    int i = 0;

    while (i < argc)
    {
      str_capitalizer(argv[i]);
      write (1, "\n", 1);
      i++;
    }
  }
}
