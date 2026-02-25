/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Bekkali <SegMind25@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/24 08:14:57 by Bekkali           #+#    #+#             */
/*   Updated: 2026/02/25 10:00:14 by Bekkali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>

char *ft_strdup(const char *s1)
{
  int   i;
  char  *d;

  i = 0;
  d = malloc(ft_strlen(s1) + 1);

  if(!d)
    return (NULL);
  while(s1[i])
  {
    d[i] = s1[i];
    i++;
  }
  d[i] = '\0';
  return (d);
}

//int main()
//{
//  char *original = "Hello World";
//  char *copy = ft_strdup(original);

//  if(!copy)
//  {
//    printf("Allocation Failed\n");
//    return (1);
//  }

//  printf("Original: %s\n", original);
//  printf("Duplicate: %s\n", copy);
//  printf("Same Pointer: %s\n", original == copy ? "yes" : "no");
//  free(copy);
//  return(0);
//}
