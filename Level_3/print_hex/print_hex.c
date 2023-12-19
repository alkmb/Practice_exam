#include <unistd.h>

int miniatoi(char *str)
{
  int n = 0;

  while (*str)
  {
    n = n * 10 + *str - 48;
    str++;
  }
  return n;
}

void  print_hex(int n)
{
  char hexa[] = "0123456789abcdef";

  if (n >= 16)
    print_hex(n / 16);
  write(1 , &hexa[n % 16], 1);
}
int main(int argc, char **argv)
{
  if (argc != 2)
    write (1, "\n", 1);
  else 
  {
    print_hex(miniatoi(argv[1]));
    write (1, "\n", 1);
  }
}
