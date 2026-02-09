#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
  size_t s_len;
  size_t i; 
  char *sub;

  if(!s)
    return (NULL);

  s_len = ft_strlen(s);
  i = 0;
  if(s_len < start)
    return (ft_strdup(""));
  if(len > s_len - start)
    len = s_len - start;
  sub = malloc(len + 1);
  if(!sub)
    return (NULL);
  while(i < len)
  {
    sub[i] = s[start];
    i++;
    start++;
  }
  sub[i] = '\0';
  return (sub);

}

int main()
{
  int i = 0;
  char *str = "Hello Neggas !";
  char *str2 = ft_substr(str, 2, 4);

  while(*str2)
    write(1, &str2[i++], 1);
}
