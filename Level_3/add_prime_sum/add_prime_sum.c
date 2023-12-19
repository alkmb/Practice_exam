#include <unistd.h>

int miniatoi(char *str)
{
  int res;

  while (*str)
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

int isprime(int n)
{
  int i = 2;

  if (n <= 1)
    return 0;
  while (i * i <= n)
  {
    if (n % i == 0)
      return 0;
    i++;
  }
  return 1;
}

int main(int argc, char **argv)
{
  if (argc != 2)
    write (1, "\n", 1);
  else 
  {
    int n = miniatoi(argv[1]);
    int sum = 0;

    while (n > 0)
    {
      if (isprime(n))
        sum += n;
      n--;
    }
    miniputnbr(sum);
    write (1, "\n", 1);
  }
}
