#include <stdio.h>
#include <unistd.h>

char  to_lower(char c)
{
  if (c >= 'A' && c <= 'Z')
    c -= 32;
  return (c);
}

int get_digit(char c, int digits_in_base)
{
  int max = 0;
  if (digits_in_base <= 10)
    max = digits_in_base + 48;
  else
    max = digits_in_base - 10 + 'a';
  if( c >= '0' && c <= '9' && c <= max)
    return (c - 48);
  else if (c >= 'a' && c <= 'f' && c <= max)
    return (10 + c - 'a');
  else
    return (-1);
}

int ft_atoi_base(char *str, int str_base)
{
  int n = 0;
  int sign = 1;
  int digit;

  while (*str == ' ' || (*str >= 9 && *str <= 13))
    str++;
  if (*str == '-')
    sign = -1;
  while ((digit = get_digit(to_lower(*str), str_base)) >= 0)
  {
    n = n * str_base;
    n = n + (digit * sign);
    str++;
  }
  return n;
}

int main(int argc, char **argv)
{
  if (argc != 2)
    write (1, "\n", 1);
  else
  {
    int n = 0;

    n = ft_atoi_base(argv[1], 10);
    printf ("%d \n", n);
  }
}
