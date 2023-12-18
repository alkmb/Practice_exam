#include <unistd.h>
#include <stdio.h>

char *ft_strcpy(char *s1, char *s2)
{
  int i = 0;

  while (s2[i])
  {
    s1[i] = s2[i];
    i++;
  }
  s1[i] = '\0';
  return s1;
}

int main(int argc, char **argv)
{
  if (argc == 3)
  {
    char *newstr;

    newstr = ft_strcpy(argv[1], argv[2]);
    printf("%s\n", newstr);
  }
  else
    write(1, "\n", 1);
}
