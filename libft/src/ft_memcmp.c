#include <../includes/libft.h>
//#include <string.h>
//#include <stdio.h>

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
  const unsigned char *p1;
  const unsigned char *p2;
  size_t i; // Counter

  if(n == 0) // n -> Size All For string
    return 1;
  p1 = (const unsigned char *)s1; // For p1 = hello and can use it for char cuz the void can't use it
  p2 = (const unsigned char *)s2; // for p2 = hellz Like Epalain In above

  i = 0;
  while(i < n)
  {
    if(p1[i] != p2[i])
      return (p1[i] - p2[i]);
    i++;
  }
  return(0);
}

//int main()
//{
//  char str1[] = "Hello";
//  char str2[] = "Hellz";

//  int arr1[] = {1, 2, 3, 4, 5};
//  int arr2[] = {1, 2, 3, 4, 5};
  
//  printf("=== The First Test ===\n");
//  printf("ft_memcmp: %d\n", ft_memcmp(str1, str2, 5));
//  printf("memcmp: %d\n\n", memcmp(str1, str2, 5));
//}
