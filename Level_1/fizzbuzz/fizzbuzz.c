#include <unistd.h>

void  miniputnbr(int n)
{
  char digit;
  
  if (n > 10)
    miniputnbr(n / 10);
  digit = n % 10 + '0';
  write(1, &digit, 1);
}

int main(void)
{
  int n = 1;
  
  while (n <= 100)
  {
    if (n % 15 == 0)
      write (1, "fizzbuzz", 9);
     else if (n % 3 == 0)
      write (1, "fizz", 4);
     else if (n % 5 == 0)
       write (1, "buzz", 4);
     else 
      miniputnbr(n);
    n++;
    write (1, "\n", 1);
  }
}
