#include <unistd.h>

int miniatoi(char *str)
{
  int res = 0;

  while(*str)
  {
    res = res * 10 + *str - 48;
    str++;
  }
  return res;
}

void miniputnbr(int n)
{
  char digit;

  if (n >= 10)
    miniputnbr(n / 10);
  digit = n % 10 + 48;
  write (1, &digit, 1);
}

int main(int argc, char **argv)
{
  if (argc != 2)
    write (1, "\n", 1);
  else 
  {
    int i = 1;
    int n = 0;
    int res;

    n = miniatoi(argv[1]);
    while (i < 10)
    {
      miniputnbr(i);
      write(1, " x ", 3);
      miniputnbr(n);
      write(1, " ", 1);
      res = n * i;
      miniputnbr(res);
      write(1, "\n", 1);
      i++;
    }
  }
}
