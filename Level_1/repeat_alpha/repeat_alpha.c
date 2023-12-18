#include <unistd.h>

void repeat_alpha(char *str)
{
  int i = 0;
  int j = 0;
  int k = 0;
  char *alpha = "abcdefghijklmnopqrstuvwxyz";
  
  while (str[i])
  {
    j = 0;
    while (alpha[j])
    {
      if (str[i] == alpha[j])
      {
        k = 0;
        while (k <= j)
        {
          write(1, &str[i], 1);
          k++;
        }
      }
      j++;
    }
    i++;
  }
  write(1, "\n", 1);
}

int main(int argc, char **argv)
{
  if (argc != 2)
    write (1, "\n", 1);
  else 
    repeat_alpha(argv[1]);
}
