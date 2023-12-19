#include <unistd.h>

void hidenp(char *str, char *str2)
{
  int i = 0;
  int j = 0;

  while(str2[j] == str[i])
  {
    if (str2[j] == str[i])
      i++;
    j++;
  }
  if (str[i] == '\0')
    write (1, "1", 1);
  else
    write (1, "0", 1);
}

int main (int argc, char **argv)
{
  if (argc != 3)
    write (1 , "\n", 1);
  else 
  {
    hidenp(argv[1], argv[2]);
    write (1, "\n", 1);
  }
}
