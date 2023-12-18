#include <unistd.h>

void  snake_to_camel(char *str)
{
  int i = 0;
  int j = 0;

  while (str[i])
  {
    if(str[i] == '_' && str[i + 1] >= 'a' && str[i + 1] <= 'z')
    {
      str[i + 1] -= 32;
      i++;
    }
    write (1, &str[i++], 1);
  }
  write ( 1, "\n", 1);
}

int main(int argc, char **argv)
{
  if (argc != 2)
    write (1, "\n", 1);
  else 
    snake_to_camel(argv[1]);
}
