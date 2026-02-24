/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Bekkali <SegMind25@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/24 06:53:07 by Bekkali           #+#    #+#             */
/*   Updated: 2026/02/24 07:17:49 by Bekkali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"
//#include <stdio.h>
//#include <string.h>

char *ft_strchr(const char *s, int c)
{
  int i;

  i = 0;
  while(s[i])
  {
    if(s[i] == (char)c)
      return ((char *)(s + i));
    i++;
  }
  if(s[i] == (char)c)
    return ((char *)(s + i));
  return (NULL);
}

//int main()
//{
//  char *str = "Hello World !";
//  char *result;
//  char *expected;

  //Find Exististing Character
//  printf("Test 1 : Find ' ' in The \"Hello World\":\n");
//  result = ft_strchr(str, ' ');
//  expected = strchr(str, ' ');

//  printf("  ft_strchr: %s\n", result ? result : "NULL");
//  printf("  strchr: %s\n", result ? result : "NULL");
//  printf("  Match: %s\n\n", result ? result : "YES : NO");
//}
