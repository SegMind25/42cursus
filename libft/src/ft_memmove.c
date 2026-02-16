/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Bekkali <SegMind25@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 11:58:20 by Bekkali           #+#    #+#             */
/*   Updated: 2026/02/16 13:19:59 by Bekkali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"
//#include <stdio.h>
//#include <string.h>

void *ft_memmove(void *dest, const void *src, size_t len)
{
  unsigned char *d;
  const unsigned char *s;

  if (dest == src)
    return (dest);

  d = (unsigned char *)dest;
  s = (const unsigned char *)src;

  if(d < s)
    ft_memcpy(d, s, len);
  else
  {
    while(len > 0)
    {
      len--;
      d[len] = s[len];
    }
  }
  return (dest);
}

//int main(void)
//{
//  char src1[50] = "Hello World !";
//  char src2[50] = "Hello World !";

//  printf("=== Test 1: Non-Overlapping Copy ===\n");
//  char dest1[50] = "ZZZZZZZZZZZZZZ";
//  char dest2[50] = "ZZZZZZZZZZZZZZ";

//  ft_memmove(dest1, src1, 13);
//  memmove(dest2, src2, 13);

//  printf("ft_memmove: %s\n", dest1);
//  printf("  memove : %s\n", dest2);
//  printf("Match: %s\n\n", strcmp(dest1, dest2) == 0 ?  "✓" : "✗");
//}
