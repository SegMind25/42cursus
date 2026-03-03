/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Bekkali <SegMind25@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/25 10:06:57 by Bekkali           #+#    #+#             */
/*   Updated: 2026/03/03 08:44:49 by Bekkali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void  ft_striteri(char *s, void (*f)(unsigned int, char *))
{
  size_t  i;

  i = 0;
  if(!s || !f)
    return ;
  while(s[i])
  {
    f(i, &s[i]);
    i++;
  }
}

void  ft_print_char(unsigned int i, char *c)
{
  printf("index %u: %c", i, *c);
}

void  to_upper(unsigned int i, char *c)
{
  (void)i;
  if(*c >= 'a' && *c <= 'z')
    *c -= 32;
}

//int main()
//{
//  char s1[] = "Hello World";
//  char s2[] = "Hello World";

// printf("=== Print Char ===\n");
//  ft_striteri(s1, ft_print_char);

//  printf("\n === To Upper ===\n");
//  printf("\n Before: %s\n \n");
//  ft_striteri();
//}
