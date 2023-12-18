#include <unistd.h>

void  expand_str(char *str)
{
  int i = 0;
  int spcs = 0;

  while(str[i] && str[i] == ' ')
    i++;
  while (str[i])
  {
    if (str[i] == ' ')
      spcs = 1;
    if (str[i] != ' ')
    {
      if (spcs)
        write (1, "   ", 3);
      spcs = 0;
      write (1, &str[i], 1);
    }
    i++;
  }
  write (1, "\n", 1);
}

int main(int argc, char **argv)
{
  if (argc != 2)
    write (1, "\n", 1);
  else 
    expand_str(argv[1]);
}
