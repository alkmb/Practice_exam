#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int is_power_of_2(unsigned int n)
{
	int number = 1;

	while(number <= n)
	{
		if (number == n)
		{
			return 1;
		}
		number = number * 2;
	}
	return 0;
}

int main(int argc, char **argv)
{
  int n;

  n = atoi(argv[1]);
  if (argc != 2)
    write (1, "\n", 1);
  else {
    if(is_power_of_2(n) == 1)
      printf("This is power of 2");
    else 
      printf("This is not a power of two");
  }
}
