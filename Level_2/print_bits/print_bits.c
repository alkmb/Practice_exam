#include <unistd.h>
#include <stdio.h>

void	print_bits(unsigned char octet)
{
  int i = 8;
  unsigned char bit;

  while (i)
  {
    i--;
    bit = (octet >> i) & 1;
    bit += '0';
    write (1, &bit, 1);
  }
}

int main(void)
{
    print_bits(40);
    return 0;
}
