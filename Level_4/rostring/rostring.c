#include <stddef.h>
#include <stdlib.h>
#include <unistd.h>

char *ft_strncpy(char *s1, char *s2, int n)
{
  int i = 0;

  while (i < n)
  {
    s1[i] = s2[i];
    i++;
  }
  s1[i] = '\0';
  return (s1);
}

char **ft_split(char *str)
{
  int i = 0;
  int j = 0;
  int k = 0;
  char **out;

  out = (char **)malloc(1000 * sizeof(char *));
  while (str[i])
  {
    while (str[i] && str[i] == ' ')
      i++;
    j = i;
    while (str[i] && str[i] != ' ')
      i++;
    if (i > j)
    {
      out[k] = (char *)malloc(1000 * sizeof(char));
      ft_strncpy(out[k++], &str[j], i - j);
    }
  }
  out[k] = NULL;
  return (out);
}

int main(int argc , char **argv)
{
  if (argc != 2)
    write (1, "\n", 1);
  else 
  {
    char **out;

    out = ft_split(argv[1]);
    int i = 1;
    int j;
    char *temp;

    temp = out[0];
    while(out[i])
    {
      j = 0;
      while(out[i][j])
      {
        write (1, &out[i][j], 1);
        j++;
      }
      i++;
      write (1, " ", 1);
    }
    i = 0;
    while (temp[i])
      write (1, &temp[i++], 1);
    write (1, "\n", 1);
  }
}
