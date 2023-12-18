#include <unistd.h>

void  search_and_replace(char *str, char replaced, char replacer)
{
  int i = 0;
  while (str[i])
  {
    if (str[i] == replaced)
      str[i] = replacer;
    write (1, &str[i++], 1);
  }
  write (1, "\n", 1);
}

int main (int argc, char **argv)
{
  if (argc != 4 || argv[2][1] || argv[3][1])
    write (1, "\n", 1);
  else 
    search_and_replace(argv[1], argv[2][0], argv[3][0]);
}
