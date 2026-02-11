/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Bekkali <SegMind25@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 10:19:00 by Bekkali           #+#    #+#             */
/*   Updated: 2026/02/11 10:51:54 by Bekkali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>
#include "../includes/libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
  unsigned char *d;
  const unsigned char *s;
  size_t  i;

  if(!dest && !src)
    return (NULL);

  d = dest;
  s = src;
  i = 0;

  while(i < n)
  {
    d[i] = s[i];
    i++;
  }
  return (dest);
}

//int main()
//{

//  char src1[] = "Hello World !";
//  char dest1[20];

//  printf("=== Test 1 ===\n");
//  ft_memcpy(dest1, src1, strlen(src1) + 1);
//  printf("ft_memcpy: %s\n", dest1);
//}
