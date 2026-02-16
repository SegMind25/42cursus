/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Bekkali <SegMind25@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 13:44:36 by Bekkali           #+#    #+#             */
/*   Updated: 2026/02/16 14:07:46 by Bekkali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"
//#include <stdio.h>

void *ft_memset(void *b, int c, size_t len)
{
  unsigned char *ptr;

  ptr = b;
  while(len > 0)
  {
    *ptr = c;
    ptr++;
    len++;
  }
  return (b);
}

//int main()
//{
//  int x;

//    ft_memset(&x, 0, 4);
//    ft_memset(&x, 0b00000101, 2);
//    ft_memset(&x, 0b00111001, 1);
//    printf("%d\n", x);
//}
