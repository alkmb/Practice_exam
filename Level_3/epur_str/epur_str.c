#include <unistd.h>

void  epur_str(char *str)
{
  int i = 0;
  int spc = 0;

  while (str[i] && str[i] == ' ')
    i++;
  while (str[i])
  {    
    if (str[i] == ' ')
      spc = 1;
    if (str[i] != ' ')
    {
      if (spc)
        write (1, " ", 1);
      spc = 0;
      write (1, &str[i], 1);
    }
    i++;
  }
  write (1, "\n", 1);
}

int main (int argc, char **argv)
{
  if (argc != 2)
    write (1, "\n", 1);
  else 
  {
    epur_str(argv[1]);
  }
}
