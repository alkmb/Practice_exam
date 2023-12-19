#include <unistd.h>

char miniputnb(int n)
{
  char digit;

  if (n >= 10)
    miniputnb(n / 10);
  digit = n % 10 + 48;
  write(1, &digit, 1);
}

int main(int argc, char **argv)
{
  int i = 0;
  while (i < argc - 1 && (argc > 1))
  {
    i++;
  }
  miniputnb(i);
  write (1, "\n", 1);
}
