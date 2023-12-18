#include <unistd.h>

void ulstr(char *str)
{
  int i = 0;

  while (str[i])
  {
    if (str[i] >= 'a' && str[i] <= 'z')
      str[i] -= 32;
    else if (str[i] >= 'A' && str[i] <= 'Z')
      str[i] += 32;
    write (1, &str[i++], 1);
  }
  write (1, "\n", 1);
}

int main(int argc, char **argv)
{
  if (argc != 2)
    write (1, "\n", 1);
  else 
    ulstr(argv[1]);
}
